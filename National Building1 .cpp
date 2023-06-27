

#include<windows.h>
#include <GL/glut.h>
#include <iostream>
#include <GL/gl.h>
#include <math.h>

// Global variables
GLfloat boatX = -40.0f;  // X-coordinate of the boat
// Global variables
GLfloat fanRotationAngle = 0.0f;  // Angle for rotating the fan

void init(void) {
    glClearColor(0.0, 0.0, 0.0, 0.0);	// Set display window colour to white

    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();                               // Set projection parameters
    glOrtho(-100, 100, 0, 140, 0, 100);
    // Rest of the code remains the same
}



void drawShapes(void) {
    glClear(GL_COLOR_BUFFER_BIT);	// Clear display window
    glColor3f(0.0, 0.0, 0.5);
    // sky color
    glBegin(GL_QUADS);

    glVertex2f(-100, 65);

    glVertex2f(100, 65);

    glVertex2f(100, 140);

    glVertex2f(-100, 140);

    glEnd();


    glColor3f(0.0, 0.5, 0.0);
    // grass cocor
    glBegin(GL_QUADS);

    glVertex2f(-100, 65);

    glVertex2f(100, 65);

    glVertex2f(100, 0);

    glVertex2f(-100, 0);

    glEnd();


    glColor3f(0.1, 0.1, 0.1);
    // mountain  1
    glBegin(GL_TRIANGLES);

    glVertex2f(-100, 50);

    glVertex2f(-65, 59);

    glVertex2f(-84, 85);

    glEnd();


    glColor3f(0.2, 0.2, 0.2);
    // mountain  2
    glBegin(GL_QUADS);

    glVertex2f(-75, 72);

    glVertex2f(-65, 59);

    glVertex2f(-45, 65);

    glVertex2f(-65, 85);

    glEnd();

    glColor3f(0.3, 0.3, 0.3);
    // mountain  3
    glBegin(GL_QUADS);

    glVertex2f(-50, 70);

    glVertex2f(-45, 65);

    glVertex2f(-25, 65);

    glVertex2f(-45, 85);

    glEnd();

    glColor3f(0.1, 0.1, 0.1);
    // mountain  6
    glBegin(GL_TRIANGLES);

    glVertex2f(100, 50);

    glVertex2f(65, 59);

    glVertex2f(84, 85);

    glEnd();

    glColor3f(0.2, 0.2, 0.2);
    // mountain  5
    glBegin(GL_QUADS);

    glVertex2f(75, 72);

    glVertex2f(65, 59);

    glVertex2f(45, 65);

    glVertex2f(65, 85);

    glEnd();

    glColor3f(0.3, 0.3, 0.3);
    // mountain  4
    glBegin(GL_QUADS);

    glVertex2f(50, 70);

    glVertex2f(45, 65);

    glVertex2f(25, 65);

    glVertex2f(45, 85);

    glEnd();


    glColor3f(0.3, 0.0, 0.0);
    // miner base 1 
    glBegin(GL_QUADS);

    glVertex2f(-45, 65);

    glVertex2f(-45, 58);

    glVertex2f(45, 58);

    glVertex2f(45, 65);

    glEnd();

    glColor3f(0.2, 0.0, 0.0);
    // miner base 2 
    glBegin(GL_QUADS);

    glVertex2f(-50, 58);

    glVertex2f(-50, 53);

    glVertex2f(50, 53);

    glVertex2f(50, 58);

    glEnd();

    glColor3f(0.5, 0.0, 0.0);
    // miner base 3 
    glBegin(GL_QUADS);

    glVertex2f(-55, 53);

    glVertex2f(-55, 48);

    glVertex2f(55, 48);

    glVertex2f(55, 53);

    glEnd();

    glColor3f(0.1, 0.1, 0.1);
    // miner base 4 
    glBegin(GL_TRIANGLES);

    glVertex2f(-40, 65);

    glVertex2f(40, 65);

    glVertex2f(0, 80);

    glEnd();


    glColor3f(0.2, 0.2, 0.2);
    // miner base 4 
    glBegin(GL_TRIANGLES);

    glVertex2f(-35, 65);

    glVertex2f(35, 65);

    glVertex2f(0, 85);

    glEnd();

    glColor3f(0.3, 0.3, 0.3);
    // miner base 4 
    glBegin(GL_TRIANGLES);

    glVertex2f(-30, 65);

    glVertex2f(30, 65);

    glVertex2f(0, 90);

    glEnd();

    glColor3f(0.4, 0.4, 0.4);
    // miner base 4 
    glBegin(GL_TRIANGLES);

    glVertex2f(-25, 65);

    glVertex2f(25, 65);

    glVertex2f(0, 95);

    glEnd();

    glColor3f(0.3, 0.3, 0.3);
    // miner base 4 
    glBegin(GL_TRIANGLES);

    glVertex2f(-20, 65);

    glVertex2f(20, 65);

    glVertex2f(0, 100);

    glEnd();

    glColor3f(0.2, 0.2, 0.2);
    // miner base 4 
    glBegin(GL_TRIANGLES);

    glVertex2f(-15, 65);

    glVertex2f(15, 65);

    glVertex2f(0, 105);

    glEnd();

    glColor3f(0.1, 0.1, 0.1);
    // miner base 4 
    glBegin(GL_TRIANGLES);

    glVertex2f(-10, 65);

    glVertex2f(10, 65);

    glVertex2f(0, 110);

    glEnd();

    glColor3f(0.5, 0.5, 0.5);
    // miner base 4 
    glBegin(GL_TRIANGLES);

    glVertex2f(-5, 65);

    glVertex2f(5, 65);

    glVertex2f(0, 125);

    glEnd();

    glColor3f(0.0, 0.0, 0.5);
    // miner pond
    glBegin(GL_QUADS);

    glVertex2f(-35, 0);

    glVertex2f(-20, 30);

    glVertex2f(20, 30);

    glVertex2f(35, 0);

    glEnd();


    glColor3f(0.1, 0.0, 0.0);
    // tree 1
    glBegin(GL_QUADS);

    glVertex2f(-91, 0);

    glVertex2f(-89, 0);

    glVertex2f(-89, 10);

    glVertex2f(-91, 10);

    glEnd();


    glColor3f(0.0, 0.1, 0.0);
    // tree 1
    glBegin(GL_TRIANGLES);

    glVertex2f(-95, 10);

    glVertex2f(-85, 10);

    glVertex2f(-90, 30);


    glEnd();

    glColor3f(0.1, 0.0, 0.0);
    // tree 2
    glBegin(GL_QUADS);

    glVertex2f(-76, 0);

    glVertex2f(-74, 0);

    glVertex2f(-74, 10);

    glVertex2f(-76, 10);

    glEnd();

    glColor3f(0.0, 0.1, 0.0);
    // tree 2
    glBegin(GL_TRIANGLES);

    glVertex2f(-80, 10);

    glVertex2f(-70, 10);

    glVertex2f(-75, 30);


    glEnd();


    glColor3f(0.1, 0.0, 0.0);
    // tree 3
    glBegin(GL_QUADS);

    glVertex2f(-61, 0);

    glVertex2f(-59, 0);

    glVertex2f(-59, 10);

    glVertex2f(-61, 10);

    glEnd();

    glColor3f(0.0, 0.1, 0.0);
    // tree 3
    glBegin(GL_TRIANGLES);

    glVertex2f(-65, 10);

    glVertex2f(-55, 10);

    glVertex2f(-60, 30);


    glEnd();


    glColor3f(0.1, 0.0, 0.0);
    // tree 4
    glBegin(GL_QUADS);

    glVertex2f(54, 0);

    glVertex2f(56, 0);

    glVertex2f(56, 10);

    glVertex2f(54, 10);

    glEnd();

    glColor3f(0.0, 0.1, 0.0);
    // tree 4
    glBegin(GL_TRIANGLES);

    glVertex2f(50, 10);

    glVertex2f(60, 10);

    glVertex2f(55, 30);


    glEnd();

    glColor3f(0.1, 0.0, 0.0);
    // tree 5
    glBegin(GL_QUADS);

    glVertex2f(69, 0);

    glVertex2f(71, 0);

    glVertex2f(71, 10);

    glVertex2f(69, 10);

    glEnd();


    glColor3f(0.0, 0.1, 0.0);
    // tree 5
    glBegin(GL_TRIANGLES);

    glVertex2f(65, 10);

    glVertex2f(75, 10);

    glVertex2f(70, 30);


    glEnd();


    glColor3f(0.1, 0.0, 0.0);
    // tree 6
    glBegin(GL_QUADS);

    glVertex2f(84, 0);

    glVertex2f(86, 0);

    glVertex2f(86, 10);

    glVertex2f(84, 10);

    glEnd();


    glColor3f(0.0, 0.1, 0.0);
    // tree 6
    glBegin(GL_TRIANGLES);

    glVertex2f(80, 10);

    glVertex2f(90, 10);

    glVertex2f(85, 30);


    glEnd();


    glColor3f(0.2, 0.0, 0.0);
    // flag base
    glBegin(GL_QUADS);

    glVertex2f(40, 65);

    glVertex2f(42, 65);

    glVertex2f(42, 115);

    glVertex2f(40, 115);

    glEnd();


    glColor3f(0.0, 0.2, 0.0);
    // flag 
    glBegin(GL_QUADS);

    glVertex2f(40, 99);

    glVertex2f(40, 114);

    glVertex2f(20, 106);

    glVertex2f(25, 95);

    glEnd();

    // Generate a circle at the center point (-10, 135)
    const GLfloat centerX = 30.0f;
    const GLfloat centerY = 104.0f;
    const GLfloat radius = 4.0f;
    const GLint numSegments = 100;
    const GLfloat angleIncrement = 2.0f * M_PI / numSegments;

    glColor3f(0.3, 0.0, 0.0);  // Set color to red

    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(centerX, centerY);  // Center vertex

    for (int i = 0; i <= numSegments; i++) {
        GLfloat angle = i * angleIncrement;
        GLfloat x = centerX + radius * cos(angle);
        GLfloat y = centerY + radius * sin(angle);
        glVertex2f(x, y);
    }

    glEnd();












    // Rotate the fan
    fanRotationAngle += 1.0f;
    if (fanRotationAngle >= 360.0f) {
        fanRotationAngle -= 360.0f;
    }

    // Call the display function
    glutPostRedisplay();





    glFlush();	// Process all OpenGL routines
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);	// Initialize GLUT
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(1500, 1000);
    glutInitWindowPosition(50, 50);
    glutCreateWindow("Moving Boat");
    init();
    glutDisplayFunc(drawShapes);
    glutMainLoop();
    return 0;
}
