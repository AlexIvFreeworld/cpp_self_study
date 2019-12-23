#include <iostream>
#include <windows.h>
#include <gl/GL.h>
#include <gl/GLU.h>
#include <gl/glut.h>
using namespace std;
//#pragma comment (lib, "opengl32.lib")
//#pragma comment (lib, "glu32.lib")
//#pragma comment(lib,"glut32.lib")
void RenderScene(void) {
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1.0f, 0.0f, 0.0f);
	glRectf(-25.0f, 25.0f, 25.0f, -25.0f);
	glFlush();
}
void SetupRC(void) {
	glClearColor(0.0f, 0.0f, 1.0f, 1.0f);
}
void ChangeSize(GLsizei w, GLsizei h) {
	GLfloat aspectRatio;
	if (h == 0) h = 1;
	glViewport(0, 0, w, h);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	aspectRatio = (GLfloat)w / (GLfloat)h;
	if (w <= h) {
		glOrtho(-100.0, 100.0, -100 / aspectRatio, 100 / aspectRatio, 1.0, -1.0);
	}
	else {
		glOrtho(-100.0*aspectRatio, 100.0*aspectRatio, -100.0, 100.0, 1.0, -1.0);
	}
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
}
int main(){
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutCreateWindow("GLrect");
	glutDisplayFunc(RenderScene);
	glutReshapeFunc(ChangeSize);
	SetupRC();
	glutMainLoop();
	//int x = 5;
	//int *p = &x;
	//*p = 4;
	//cout << "x = " << x << endl;
	//char *ch = (char*)&x;
	//cout << "ch = " << ch << endl;
	////cout << "*ch = " << *ch << endl;
	//for (int i = 0; i <= 256; i++) {
	//	cout << "i = " << i << " ch = " << (char*)&i << endl;
	//}
	//int k = 1000000;
	//cout << "--------------------------------------------" << endl;
	//cout << "k = " << k << " ch = " << (char*)&k << endl;

	//cin.get();
	return 0;
}