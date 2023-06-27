

#include<windows.h>
#include <GL/glut.h>
#include <iostream>
#include <GL/gl.h>
#include <math.h>

GLfloat carPositionX = -100;  // X-coordinate of the car's position
// Global variables
GLfloat fanRotationAngle = 0.0f;  // Angle for rotating the fan

void init(void) {
    glClearColor(0.0, 0.5, 1.0, 0.0);	// Set display window colour to white

    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();                               // Set projection parameters
    glOrtho(-100, 100, 0, 150, 0, 100);
    // Rest of the code remains the same
}



void drawFan(void) {
    // Set the color for the fan
    glColor3f(0.0, 0.0, 0.0);

    // Draw the base of the fan
    glBegin(GL_QUADS);
    glVertex2f(66, 134);
    glVertex2f(68, 134);
    glVertex2f(68, 136);
    glVertex2f(66, 136);
    glEnd();

    // Draw the blades of the fan
    glBegin(GL_TRIANGLES);
    for (int i = 0; i < 4; i++) {
        // Calculate the angle for each blade                                                                                                                           
        GLfloat angle = (i * 90.0f + fanRotationAngle) * (M_PI / 180.0f);
        GLfloat x1 = 67 + 5 * cos(angle);
        GLfloat y1 = 135 + 5 * sin(angle);
        GLfloat x2 = 67 + 20 * cos(angle + 0.3);
        GLfloat y2 = 135 + 20 * sin(angle + 0.3);
        GLfloat x3 = 67 + 20 * cos(angle - 0.3);
        GLfloat y3 = 135 + 20 * sin(angle - 0.3);
        glVertex2f(x1, y1);
        glVertex2f(x2, y2);
        glVertex2f(x3, y3);
    }
    glEnd();
}

void drawShapes(void) {
    glClear(GL_COLOR_BUFFER_BIT);	// Clear display window
    glColor3f(0.0, 1.0, 0.0);


    // Draw (school shape main buliding)
    glBegin(GL_QUADS);

    glVertex2f(-20, 70);

    glVertex2f(20, 70);

    glVertex2f(20, 110);

    glVertex2f(-20, 110);

    glEnd();

    glColor3f(0.1, 0.0, 0.0);


    // Draw (school shape main buliding roof)
    glBegin(GL_QUADS);

    glVertex2f(-23, 107);

    glVertex2f(23, 107);

    glVertex2f(17, 113);

    glVertex2f(-17, 113);

    glEnd();

    glColor3f(0.0, 1.0, 0.55);

    // Draw (school shape side buliding 1)
    glBegin(GL_QUADS);

    glVertex2f(20, 70);

    glVertex2f(40, 70);

    glVertex2f(40, 100);

    glVertex2f(20, 100);

    glEnd();

    glColor3f(0.1, 0.0, 0.0);

    // Draw (school shape side buliding 1 roof)
    glBegin(GL_QUADS);

    glVertex2f(20, 100);

    glVertex2f(45, 100);

    glVertex2f(40, 105);

    glVertex2f(20, 105);

    glEnd();

    glColor3f(0.0, 1.0, 0.55);

    // Draw (school shape side buliding 2)
    glBegin(GL_QUADS);

    glVertex2f(-20, 70);

    glVertex2f(-40, 70);

    glVertex2f(-40, 100);

    glVertex2f(-20, 100);

    glEnd();

    glColor3f(0.1, 0.0, 0.0);

    // Draw (school shape side buliding 2 roof)
    glBegin(GL_QUADS);

    glVertex2f(-20, 100);

    glVertex2f(-45, 100);

    glVertex2f(-40, 105);

    glVertex2f(-20, 105);

    glEnd();

    glColor3f(0.1, 0.0, 0.0);

    // Draw (school shape buliding door)
    glBegin(GL_QUADS);

    glVertex2f(10, 70);

    glVertex2f(5, 75);

    glVertex2f(-5, 75);

    glVertex2f(-10, 70);

    glEnd();

    glColor3f(0.1, 0.0, 0.0);

    // Draw (school shape buliding door)
    glBegin(GL_QUADS);

    glVertex2f(5, 75);

    glVertex2f(5, 85);

    glVertex2f(-5, 85);

    glVertex2f(-5, 75);

    glEnd();

    glColor3f(0.1, 0.0, 0.0);

    // Draw (school shape buliding window 1)
    glBegin(GL_QUADS);

    glVertex2f(-5, 95);

    glVertex2f(-5, 90);

    glVertex2f(5, 90);

    glVertex2f(5, 95);

    glEnd();

    glColor3f(0.1, 0.0, 0.0);

    // Draw (school shape buliding window 2)
    glBegin(GL_QUADS);

    glVertex2f(-5, 100);

    glVertex2f(-5, 105);

    glVertex2f(5, 105);

    glVertex2f(5, 100);

    glEnd();

    glColor3f(0.1, 0.0, 0.0);

    // Draw (school shape buliding window 3)
    glBegin(GL_QUADS);

    glVertex2f(10, 80);

    glVertex2f(15, 80);

    glVertex2f(15, 85);

    glVertex2f(10, 85);

    glEnd();

    glColor3f(0.1, 0.0, 0.0);

    // Draw (school shape buliding window 4)
    glBegin(GL_QUADS);

    glVertex2f(10, 90);

    glVertex2f(15, 90);

    glVertex2f(15, 95);

    glVertex2f(10, 95);

    glEnd();

    glColor3f(0.1, 0.0, 0.0);

    // Draw (school shape buliding window 5)
    glBegin(GL_QUADS);

    glVertex2f(10, 100);

    glVertex2f(15, 100);

    glVertex2f(15, 105);

    glVertex2f(10, 105);

    glEnd();


    glColor3f(0.1, 0.0, 0.0);

    // Draw (school shape buliding window 6)
    glBegin(GL_QUADS);

    glVertex2f(-10, 80);

    glVertex2f(-15, 80);

    glVertex2f(-15, 85);

    glVertex2f(-10, 85);

    glEnd();


    glColor3f(0.1, 0.0, 0.0);

    // Draw (school shape buliding window 7)
    glBegin(GL_QUADS);

    glVertex2f(-10, 90);

    glVertex2f(-15, 90);

    glVertex2f(-15, 95);

    glVertex2f(-10, 95);

    glEnd();


    glColor3f(0.1, 0.0, 0.0);

    // Draw (school shape buliding window 8)
    glBegin(GL_QUADS);

    glVertex2f(-10, 100);

    glVertex2f(-15, 100);

    glVertex2f(-15, 105);

    glVertex2f(-10, 105);

    glEnd();


    glColor3f(0.1, 0.0, 0.0);

    // Draw (school shape buliding window 9)
    glBegin(GL_QUADS);

    glVertex2f(23, 95);

    glVertex2f(28, 95);

    glVertex2f(28, 90);

    glVertex2f(23, 90);

    glEnd();


    glColor3f(0.1, 0.0, 0.0);

    // Draw (school shape buliding window 11)
    glBegin(GL_QUADS);

    glVertex2f(23, 85);

    glVertex2f(28, 85);

    glVertex2f(28, 80);

    glVertex2f(23, 80);

    glEnd();

    glColor3f(0.1, 0.0, 0.0);

    // Draw (school shape buliding window 10)
    glBegin(GL_QUADS);

    glVertex2f(32, 95);

    glVertex2f(37, 95);

    glVertex2f(37, 90);

    glVertex2f(32, 90);

    glEnd();

    glColor3f(0.1, 0.0, 0.0);

    // Draw (school shape buliding window 12)
    glBegin(GL_QUADS);

    glVertex2f(32, 85);

    glVertex2f(37, 85);

    glVertex2f(37, 80);

    glVertex2f(32, 80);

    glEnd();


    glColor3f(0.1, 0.0, 0.0);

    // Draw (school shape buliding window 17)
    glBegin(GL_QUADS);

    glVertex2f(-32, 85);

    glVertex2f(-37, 85);

    glVertex2f(-37, 80);

    glVertex2f(-32, 80);

    glEnd();

    glColor3f(0.1, 0.0, 0.0);

    // Draw (school shape buliding window 18)
    glBegin(GL_QUADS);

    glVertex2f(-23, 85);

    glVertex2f(-28, 85);

    glVertex2f(-28, 80);

    glVertex2f(-23, 80);

    glEnd();


    glColor3f(0.1, 0.0, 0.0);

    // Draw (school shape buliding window 15)
    glBegin(GL_QUADS);

    glVertex2f(-23, 95);

    glVertex2f(-28, 95);

    glVertex2f(-28, 90);

    glVertex2f(-23, 90);

    glEnd();

    glColor3f(0.1, 0.0, 0.0);

    // Draw (school shape buliding window 15)
    glBegin(GL_QUADS);

    glVertex2f(-32, 95);

    glVertex2f(-37, 95);

    glVertex2f(-37, 90);

    glVertex2f(-32, 90);

    glEnd();

    glColor3f(0.1, 0.0, 0.0);

    // Draw (school tree 1 base)
    glBegin(GL_QUADS);

    glVertex2f(-44, 80);

    glVertex2f(-46, 80);

    glVertex2f(-46, 70);

    glVertex2f(-44, 70);

    glEnd();

    glColor3f(0.0, 0.1, 0.0);

    // Draw (school tree 1 tri 1)
    glBegin(GL_TRIANGLES);

    glVertex2f(-49, 80);

    glVertex2f(-41, 80);

    glVertex2f(-45, 85);

    glEnd();



    glColor3f(0.0, 0.1, 0.0);

    // Draw (school tree 1 tri 2)
    glBegin(GL_TRIANGLES);

    glVertex2f(-49, 85);

    glVertex2f(-41, 85);

    glVertex2f(-45, 90);
    glEnd();

    glColor3f(0.0, 0.1, 0.0);

    // Draw (school tree 1 tri 3)
    glBegin(GL_TRIANGLES);

    glVertex2f(-49, 90);

    glVertex2f(-41, 90);

    glVertex2f(-45, 95);

    glEnd();

    glColor3f(0.1, 0.0, 0.0);

    // Draw (school tree 2 base)
    glBegin(GL_QUADS);

    glVertex2f(44, 80);

    glVertex2f(46, 80);

    glVertex2f(46, 70);

    glVertex2f(44, 70);

    glEnd();

    glColor3f(0.0, 0.1, 0.0);

    // Draw (school tree 2 tri 1)
    glBegin(GL_TRIANGLES);

    glVertex2f(49, 80);

    glVertex2f(41, 80);

    glVertex2f(45, 85);

    glEnd();

    glColor3f(0.0, 0.1, 0.0);

    // Draw (school tree 2 tri 2)
    glBegin(GL_TRIANGLES);

    glVertex2f(49, 85);

    glVertex2f(41, 85);

    glVertex2f(45, 90);
    glEnd();

    glColor3f(0.0, 0.1, 0.0);

    // Draw (school tree 1 tri 3)
    glBegin(GL_TRIANGLES);

    glVertex2f(49, 90);

    glVertex2f(41, 90);

    glVertex2f(45, 95);

    glEnd();


    //Flag base
    glColor3f(0.1, 0.0, 0.0);

    glBegin(GL_QUADS);

    glVertex2f(-1, 113);

    glVertex2f(1, 113);

    glVertex2f(1, 130);

    glVertex2f(-1, 130);

    glEnd();

    //school sign

    glColor3f(1.0, 0.0, 0.0);

    glBegin(GL_QUADS);

    glVertex2f(-22, 115);

    glVertex2f(22, 115);

    glVertex2f(22, 120);

    glVertex2f(-22, 120);

    glEnd();

    // Set the text color
    glColor3f(0.0, 0.0, 0.0); // Black color

    // Set the starting position for text
    glRasterPos2f(-20, 116);

    // Render the text within the square
    const char* text = "Daffodil International School";
    for (int i = 0; text[i] != '\0'; i++) {
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, text[i]);
    }


    //Flag 
    glColor3f(0.0, 0.45, 0.0);

    glBegin(GL_QUADS);

    glVertex2f(1, 130);

    glVertex2f(-20, 130);

    glVertex2f(-20, 145);

    glVertex2f(1, 145);

    glEnd();

    //circle

    // Generate a circle at the center point (-10, 135)
    const GLfloat centerX = -10.0f;
    const GLfloat centerY = 137.0f;
    const GLfloat radius = 4.0f;
    const GLint numSegments = 100;
    const GLfloat angleIncrement = 2.0f * M_PI / numSegments;

    glColor3f(1.0, 0.0, 0.0);  // Set color to red

    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(centerX, centerY);  // Center vertex

    for (int i = 0; i <= numSegments; i++) {
        GLfloat angle = i * angleIncrement;
        GLfloat x = centerX + radius * cos(angle);
        GLfloat y = centerY + radius * sin(angle);
        glVertex2f(x, y);
    }

    glEnd();

    //shape of building B1
    glColor3f(0.45, 0.0, 0.45);

    glBegin(GL_QUADS);

    glVertex2f(-95, 70);

    glVertex2f(-75, 70);

    glVertex2f(-75, 110);

    glVertex2f(-95, 110);

    glEnd();

    //shape of side building B1
    glColor3f(0.45, 0.45, 0.45);

    glBegin(GL_QUADS);

    glVertex2f(-75, 70);

    glVertex2f(-50, 70);

    glVertex2f(-50, 130);

    glVertex2f(-75, 130);

    glEnd();

    //shape of side building B1
    glColor3f(0.45, 0.45, 0.0);

    glBegin(GL_TRIANGLES);

    glVertex2f(-80, 130);

    glVertex2f(-45, 130);

    glVertex2f(-62, 140);



    glEnd();

    //shape of side building B1
    glColor3f(0.45, 0.45, 0.0);

    glBegin(GL_TRIANGLES);

    glVertex2f(-75, 110);

    glVertex2f(-100, 110);

    glVertex2f(-85, 120);



    glEnd();

    //shape of side building B1 design
    glColor3f(0.45, 0.0, 0.0);

    glBegin(GL_QUADS);

    glVertex2f(-75, 110);

    glVertex2f(-50, 110);

    glVertex2f(-50, 115);

    glVertex2f(-75, 115);

    glEnd();

    //shape of side building B1
    glColor3f(0.45, 0.45, 0.45);

    glBegin(GL_QUADS);

    glVertex2f(-45, 140);

    glVertex2f(-45, 140);

    glVertex2f(-80, 143);

    glVertex2f(-80, 143);

    glEnd();

    // B1 windows 1
    glColor3f(0.0, 0.0, 0.0);

    glBegin(GL_QUADS);

    glVertex2f(-90, 71);

    glVertex2f(-80, 71);

    glVertex2f(-80, 74);

    glVertex2f(-90, 74);

    glEnd();


    // B1 windows 2
    glColor3f(0.0, 0.0, 0.0);

    glBegin(GL_QUADS);

    glVertex2f(-90, 76);

    glVertex2f(-80, 76);

    glVertex2f(-80, 79);

    glVertex2f(-90, 79);

    glEnd();


    // B1 windows 3
    glColor3f(0.0, 0.0, 0.0);

    glBegin(GL_QUADS);

    glVertex2f(-90, 81);

    glVertex2f(-80, 81);

    glVertex2f(-80, 84);

    glVertex2f(-90, 84);

    glEnd();


    // B1 windows 4
    glColor3f(0.0, 0.0, 0.0);

    glBegin(GL_QUADS);

    glVertex2f(-90, 86);

    glVertex2f(-80, 86);

    glVertex2f(-80, 89);

    glVertex2f(-90, 89);

    glEnd();


    // B1 windows 5
    glColor3f(0.0, 0.0, 0.0);

    glBegin(GL_QUADS);

    glVertex2f(-90, 91);

    glVertex2f(-80, 91);

    glVertex2f(-80, 94);

    glVertex2f(-90, 94);

    glEnd();



    // B1 windows 6
    glColor3f(0.0, 0.0, 0.0);

    glBegin(GL_QUADS);

    glVertex2f(-90, 96);

    glVertex2f(-80, 96);

    glVertex2f(-80, 99);

    glVertex2f(-90, 99);

    glEnd();


    // B1 windows 7
    glColor3f(0.0, 0.0, 0.0);

    glBegin(GL_QUADS);

    glVertex2f(-90, 101);

    glVertex2f(-80, 101);

    glVertex2f(-80, 104);

    glVertex2f(-90, 104);

    glEnd();


    // B1 windows 8
    glColor3f(0.0, 0.0, 0.0);

    glBegin(GL_QUADS);

    glVertex2f(-90, 106);

    glVertex2f(-80, 106);

    glVertex2f(-80, 109);

    glVertex2f(-90, 109);

    glEnd();


    // B1 windows sidebuilding window 1
    glColor3f(0.0, 0.0, 0.0);

    glBegin(GL_QUADS);

    glVertex2f(-70, 73);

    glVertex2f(-65, 73);

    glVertex2f(-65, 77);

    glVertex2f(-70, 77);

    glEnd();

    // B1 windows sidebuilding window 2
    glColor3f(0.0, 0.0, 0.0);

    glBegin(GL_QUADS);

    glVertex2f(-70, 83);

    glVertex2f(-65, 83);

    glVertex2f(-65, 87);

    glVertex2f(-70, 87);

    glEnd();

    // B1 windows sidebuilding window 3
    glColor3f(0.0, 0.0, 0.0);

    glBegin(GL_QUADS);

    glVertex2f(-70, 93);

    glVertex2f(-65, 93);

    glVertex2f(-65, 97);

    glVertex2f(-70, 97);

    glEnd();

    // B1 windows sidebuilding window 4
    glColor3f(0.0, 0.0, 0.0);

    glBegin(GL_QUADS);

    glVertex2f(-70, 103);

    glVertex2f(-65, 103);

    glVertex2f(-65, 107);

    glVertex2f(-70, 107);

    glEnd();

    // B1 windows sidebuilding window 5
    glColor3f(0.0, 0.0, 0.0);

    glBegin(GL_QUADS);

    glVertex2f(-70, 120);

    glVertex2f(-65, 120);

    glVertex2f(-65, 125);

    glVertex2f(-70, 125);

    glEnd();

    // B1 windows sidebuilding window 6
    glColor3f(0.0, 0.0, 0.0);

    glBegin(GL_QUADS);

    glVertex2f(-60, 73);

    glVertex2f(-55, 73);

    glVertex2f(-55, 77);

    glVertex2f(-60, 77);

    glEnd();


    // B1 windows sidebuilding window 7
    glColor3f(0.0, 0.0, 0.0);

    glBegin(GL_QUADS);

    glVertex2f(-60, 83);

    glVertex2f(-55, 83);

    glVertex2f(-55, 87);

    glVertex2f(-60, 87);

    glEnd();


    // B1 windows sidebuilding window 8
    glColor3f(0.0, 0.0, 0.0);

    glBegin(GL_QUADS);

    glVertex2f(-60, 93);

    glVertex2f(-55, 93);

    glVertex2f(-55, 97);

    glVertex2f(-60, 97);

    glEnd();

    // B1 windows sidebuilding window 9
    glColor3f(0.0, 0.0, 0.0);

    glBegin(GL_QUADS);

    glVertex2f(-60, 103);

    glVertex2f(-55, 103);

    glVertex2f(-55, 107);

    glVertex2f(-60, 107);

    glEnd();

    // B1 windows sidebuilding window 10
    glColor3f(0.0, 0.0, 0.0);

    glBegin(GL_QUADS);

    glVertex2f(-60, 120);

    glVertex2f(-55, 120);

    glVertex2f(-55, 125);

    glVertex2f(-60, 125);

    glEnd();

    //shape of b3
    glColor3f(0.5, 0.89, 0.20);

    glBegin(GL_QUADS);

    glVertex2f(55, 70);

    glVertex2f(80, 70);

    glVertex2f(80, 105);

    glVertex2f(55, 105);

    glEnd();

    //base 1 b3

    glColor3f(0.1, 0.0, 0.0);

    glBegin(GL_QUADS);

    glVertex2f(60, 105);

    glVertex2f(65, 105);

    glVertex2f(65, 115);

    glVertex2f(60, 115);

    glEnd();

    //base 2 b3

    glColor3f(0.1, 0.0, 0.0);

    glBegin(GL_QUADS);

    glVertex2f(70, 105);

    glVertex2f(75, 105);

    glVertex2f(75, 115);

    glVertex2f(70, 115);

    glEnd();

    //upper part b3

    glColor3f(1.0, 0.0, 1.0);

    glBegin(GL_QUADS);

    glVertex2f(50, 115);

    glVertex2f(85, 115);

    glVertex2f(85, 130);

    glVertex2f(50, 130);

    glEnd();

    //upper part  base b3

    glColor3f(0.1, 0.0, 0.0);

    glBegin(GL_QUADS);

    glVertex2f(65, 130);

    glVertex2f(70, 130);

    glVertex2f(70, 135);

    glVertex2f(65, 135);

    glEnd();

    // b3 door
    glColor3f(0.0, 0.0, 0.0);

    glBegin(GL_QUADS);

    glVertex2f(60, 70);

    glVertex2f(75, 70);

    glVertex2f(75, 90);

    glVertex2f(60, 90);

    glEnd();

    //b3  tree

    glColor3f(0.1, 0.0, 0.0);

    glBegin(GL_QUADS);

    glVertex2f(90, 70);

    glVertex2f(92, 70);

    glVertex2f(92, 85);

    glVertex2f(90, 85);

    glEnd();
    //tree
    glColor3f(0.0, 0.1, 0.0);

    glBegin(GL_TRIANGLES);

    glVertex2f(85, 85);

    glVertex2f(95, 85);

    glVertex2f(91, 90);


    glEnd();

    //tree 2
    glColor3f(0.0, 0.1, 0.0);

    glBegin(GL_TRIANGLES);

    glVertex2f(85, 90);

    glVertex2f(95, 90);

    glVertex2f(91, 95);

    glEnd();

    //road

    glColor3f(0.0, 0.1, 0.0);

    glBegin(GL_QUADS);

    glVertex2f(60, 35);

    glVertex2f(80, 35);

    glVertex2f(80, 40);

    glVertex2f(60, 40);

    glEnd();






















































    //road
    glColor3f(0.1, 0.1, 0.01);

    glBegin(GL_QUADS);

    glVertex2f(-100, 0);

    glVertex2f(-100, 70);

    glVertex2f(100, 70);

    glVertex2f(100, 0);

    glEnd();

    glColor3f(0.3, 0.3, 0.3);

    glBegin(GL_QUADS);

    glVertex2f(60, 35);

    glVertex2f(80, 35);

    glVertex2f(80, 40);

    glVertex2f(60, 40);

    glEnd();


    glColor3f(0.3, 0.3, 0.3);

    glBegin(GL_QUADS);

    glVertex2f(35, 35);

    glVertex2f(50, 35);

    glVertex2f(50, 40);

    glVertex2f(35, 40);

    glEnd();


    glColor3f(0.3, 0.3, 0.3);

    glBegin(GL_QUADS);

    glVertex2f(10, 35);

    glVertex2f(25, 35);

    glVertex2f(25, 40);

    glVertex2f(10, 40);

    glEnd();


    glColor3f(0.3, 0.3, 0.3);

    glBegin(GL_QUADS);

    glVertex2f(-15, 35);

    glVertex2f(0, 35);

    glVertex2f(0, 40);

    glVertex2f(-15, 40);

    glEnd();


    glColor3f(0.3, 0.3, 0.3);

    glBegin(GL_QUADS);

    glVertex2f(-40, 35);

    glVertex2f(-25, 35);

    glVertex2f(-25, 40);

    glVertex2f(-40, 40);

    glEnd();

    glColor3f(0.3, 0.3, 0.3);

    glBegin(GL_QUADS);

    glVertex2f(-65, 35);

    glVertex2f(-50, 35);

    glVertex2f(-50, 40);

    glVertex2f(-65, 40);

    glEnd();


    glColor3f(0.3, 0.3, 0.3);

    glBegin(GL_QUADS);

    glVertex2f(-95, 35);

    glVertex2f(-80, 35);

    glVertex2f(-80, 40);

    glVertex2f(-95, 40);

    glEnd();













    // Rest of the code remains the same

    glPushMatrix();
    glTranslatef(carPositionX, 0, 0);
    glColor3f(1.0, 0.0, 0.0);  // Set color for the car (red)

    // Draw the car body
    glBegin(GL_QUADS);
    glVertex2f(-75, 60);
    glVertex2f(-70, 55);
    glVertex2f(-70, 50);
    glVertex2f(-75, 50);
    glEnd();


    // Draw the car body
    glBegin(GL_QUADS);
    glVertex2f(-92, 60);
    glVertex2f(-78, 60);
    glVertex2f(-80, 65);
    glVertex2f(-90, 65);
    glEnd();


    // Draw the car body
    glBegin(GL_QUADS);
    glVertex2f(-95, 50);
    glVertex2f(-75, 50);
    glVertex2f(-75, 60);
    glVertex2f(-95, 60);
    glEnd();

    // Draw the wheels
    glColor3f(0.0, 0.0, 0.0);  // Set color for the wheels (black)
    glTranslatef(-90, 50, 0);  // Translate to the wheel position
    glutSolidTorus(2, 5, 10, 10);  // Draw the wheel
    glTranslatef(10, 0, 0);  // Translate to the second wheel position
    glutSolidTorus(2, 5, 10, 10);  // Draw the wheel

    glPopMatrix();

    // Update the car's position
    carPositionX += 0.05;  // Adjust the value according to the desired speed

    // Reset the car's position to the left side of the screen
    if (carPositionX >= +180) {
        carPositionX = -100;
    }



    // Call the drawFan function
    drawFan();

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
    glutCreateWindow("City School");
    init();
    glutDisplayFunc(drawShapes);
    glutMainLoop();
    return 0;
}
