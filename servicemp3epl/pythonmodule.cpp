#include "servicemp3.h"


static PyMethodDef servicemp3Methods[] =
{
	 {NULL,NULL,0,NULL}
};

PyMODINIT_FUNC
initservicemp3epl(void)
{
	Py_InitModule("servicemp3epl", servicemp3Methods);
}
