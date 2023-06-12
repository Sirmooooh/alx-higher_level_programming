#include <Python.h>
#include <object.h>
#include <listobject.h>

void print_python_list_info(PyObject *p)
{
	long int size = PyList_Size(p);
	int index = 0;
	PyListObject *obj = (PyListObject *)p;

	printf("[*] Size of the Python List = %li\n", size);
	printf("[*] Allocated = %li\n", obj->allocated);
    
	while (index < size)
	{
		printf("Element %i: %s\n", index, Py_TYPE(obj->ob_item[index])->tp_name);
		index++;
	}
}
