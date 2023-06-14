#include <Python.h>

void print_python_list(PyObject *p);
void print_python_bytes(PyObject *p);

/**
 * print_python_list - Prints basic info about Python lists.
 * @p: A PyObject list object.
 */
void print_python_list(PyObject *p)
{
	int length, alloc, index;
	const char *type;
	PyListObject *list = (PyListObject *)p;
	PyVarObject *var = (PyVarObject *)p;

	length = var->ob_size;
	alloc = list->allocated;

	printf("[*] Python list info\n");
	printf("[*] Size of the Python List = %d\n", length);
	printf("[*] Allocated = %d\n", alloc);

	for (index = 0; index < length; index++)
	{
		type = list->ob_item[index]->ob_type->tp_name;
		printf("Element %d: %s\n", index, type);
		if (strcmp(type, "bytes") == 0)
			print_python_bytes(list->ob_item[index]);
	}
}

/**
 * print_python_bytes - Prints basic info about Python byte objects.
 * @p: A PyObject byte object.
 */
void print_python_bytes(PyObject *p)
{
	unsigned char byte, length;
	PyBytesObject *bytes = (PyBytesObject *)p;

	printf("[.] bytes object info\n");
	if (strcmp(p->ob_type->tp_name, "bytes") != 0)
	{
		printf("  [ERROR] Invalid Bytes Object\n");
		return;
	}

	printf("  size: %ld\n", ((PyVarObject *)p)->ob_size);
	printf("  trying string: %s\n", bytes->ob_sval);

	if (((PyVarObject *)p)->ob_size > 10)
		length = 10;
	else
		length = ((PyVarObject *)p)->ob_size + 1;

	printf("  first %d bytes: ", length);
	for (byte = 0; byte < length; byte++)
	{
		printf("%02hhx", bytes->ob_sval[byte]);
		if (byte == (length - 1))
			printf("\n");
		else
			printf(" ");
	}
}
