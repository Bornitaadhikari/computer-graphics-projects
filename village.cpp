

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
    glOrtho(-100, 100, 0, 160, 0, 100);
    // Rest of the code remains the same
}

void drawFan(void) {
    // Set the color for the fan
    glColor3f(0.0, 0.0, 0.0);

    // Draw the base of the fan
    glBegin(GL_QUADS);
    glVertex2f(79, 74);
    glVertex2f(81, 74);
    glVertex2f(81, 76);
    glVertex2f(79, 76);
    glEnd();

    // Draw the blades of the fan
    glBegin(GL_TRIANGLES);
    for (int i = 0; i < 4; i++) {
        // Calculate the angle for each blade
        GLfloat angle = (i * 90.0f + fanRotationAngle) * (M_PI / 180.0f);
        GLfloat x1 = 80 + 5 * cos(angle);
        GLfloat y1 = 75 + 5 * sin(angle);
        GLfloat x2 = 80 + 20 * cos(angle + 0.3);
        GLfloat y2 = 75 + 20 * sin(angle + 0.3);
        GLfloat x3 = 80 + 20 * cos(angle - 0.3);
        GLfloat y3 = 75 + 20 * sin(angle - 0.3);
        glVertex2f(x1, y1);
        glVertex2f(x2, y2);
        glVertex2f(x3, y3);
    }
    glEnd();
}


void drawBoat(void) {
    // Set the color for the boat
    glColor3f(0.0, 0.0, 0.0);

    // Draw the body of the boat
    glBegin(GL_POLYGON);
    glVertex2f(boatX, 20);
    glVertex2f(boatX + 20, 20);
    glVertex2f(boatX + 30, 30);
    glVertex2f(boatX - 10, 30);
    glEnd();

    // Draw the sail of the boat
    glColor3f(0.1, 0.0, 0.0);
    glBegin(GL_TRIANGLES);
    glVertex2f(boatX + 5, 20);
    glVertex2f(boatX + 5, 40);
    glVertex2f(boatX + 20, 30);
    glEnd();
}

void drawShapes(void) {
    glClear(GL_COLOR_BUFFER_BIT);	// Clear display window
    glColor3f(0.0, 0.0, 1.0);
    // sky color
    glBegin(GL_QUADS);

    glVertex2f(-100, 100);

    glVertex2f(100, 100);

    glVertex2f(100, 160);

    glVertex2f(-100, 160);

    glEnd();

    glColor3f(0.0, 0.0, 0.45);
    // sky color
    glBegin(GL_QUADS);

    glVertex2f(-100, 0);

    glVertex2f(100, 0);

    glVertex2f(100, 100);

    glVertex2f(-100, 100);

    glEnd();


    glColor3f(0.0, 0.90, 0.0);
    // grass left 
    glBegin(GL_POLYGON);

    glVertex2f(100, 100);

    glVertex2f(70, 100);

    glVertex2f(45, 70);

    glVertex2f(60, 70);

    glVertex2f(30, 45);

    glVertex2f(60, 45);

    glVertex2f(25, 25);

    glVertex2f(100, 25);

    glEnd();

    glColor3f(0.0, 0.90, 0.0);
    // grass right 
    glBegin(GL_POLYGON);

    glVertex2f(-100, 10);

    glVertex2f(0, 45);

    glVertex2f(-30, 45);

    glVertex2f(15, 75);

    glVertex2f(-15, 75);

    glVertex2f(10, 100);

    glVertex2f(-100, 100);

    glEnd();


    //mountain 1

    glColor3f(0.1, 0.1, 0.1);

    glBegin(GL_TRIANGLES);

    glVertex2f(-23, 100);

    glVertex2f(35, 100);

    glVertex2f(10, 135);


    glEnd();

    //mountain 2

    glColor3f(0.3, 0.3, 0.3);

    glBegin(GL_QUADS);

    glVertex2f(20, 120);

    glVertex2f(35, 100);

    glVertex2f(60, 100);

    glVertex2f(35, 135);


    glEnd();

    //mountain 3

    glColor3f(0.4, 0.4, 0.4);

    glBegin(GL_QUADS);

    glVertex2f(45, 120);

    glVertex2f(60, 100);

    glVertex2f(85, 100);

    glVertex2f(60, 135);


    glEnd();

    //mountain 4

    glColor3f(0.5, 0.5, 0.5);

    glBegin(GL_QUADS);

    glVertex2f(70, 120);

    glVertex2f(85, 100);

    glVertex2f(100, 100);

    glVertex2f(80, 135);


    glEnd();

    //grass side

    glColor3f(0.1, 0.1, 0.0);

    glBegin(GL_QUADS);

    glVertex2f(-90, 0);

    glVertex2f(0, 45);

    glVertex2f(0, 45);

    glVertex2f(-100, 10);


    glEnd();


    //circle

    // Generate a circle at the center point (-10, 135)
    const GLfloat centerX = 20.0f;
    const GLfloat centerY = 145.0f;
    const GLfloat radius = 7.0f;
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


    //house 1 base

    glColor3f(0.4, 0.0, 0.0);

    glBegin(GL_QUADS);

    glVertex2f(-75, 75);

    glVertex2f(-50, 75);

    glVertex2f(-50, 95);

    glVertex2f(-75, 95);

    glEnd();


    //house 1 roof

    glColor3f(0.3, 0.3, 0.3);

    glBegin(GL_QUADS);

    glVertex2f(-80, 95);

    glVertex2f(-50, 95);

    glVertex2f(-35, 110);

    glVertex2f(-65, 110);

    glEnd();

    //house 1 roof side

    glColor3f(0.4, 0.4, 0.4);

    glBegin(GL_QUADS);

    glVertex2f(-37, 108);

    glVertex2f(-25, 95);

    glVertex2f(-20, 95);

    glVertex2f(-35, 110);

    glEnd();

    //house 1

    glColor3f(0.5, 0.5, 0.5);

    glBegin(GL_POLYGON);

    glVertex2f(-50, 95);

    glVertex2f(-50, 75);

    glVertex2f(-25, 75);

    glVertex2f(-25, 95);

    glVertex2f(-37, 108);

    glEnd();

    //house window 1

    glColor3f(0.9, 0.9, 0.0);

    glBegin(GL_POLYGON);

    glVertex2f(-45, 85);

    glVertex2f(-30, 85);

    glVertex2f(-30, 95);

    glVertex2f(-45, 95);



    glEnd();


    //house 1 door

    glColor3f(0.9, 0.9, 0.0);

    glBegin(GL_POLYGON);

    glVertex2f(-67, 75);

    glVertex2f(-56, 75);

    glVertex2f(-56, 90);

    glVertex2f(-67, 90);

    glEnd();


    //banana leaf 1

    glColor3f(0.0, 0.5, 0.0);

    glBegin(GL_QUADS);

    glVertex2f(-53, 110);

    glVertex2f(-33, 122);

    glVertex2f(-31, 118);

    glVertex2f(-40, 111);

    glVertex2f(-53, 110);

    glEnd();


    //banana leaf 1 upper

    glColor3f(0.0, 0.5, 0.0);

    glBegin(GL_TRIANGLES);

    glVertex2f(-33, 122);

    glVertex2f(-27, 118);

    glVertex2f(-26, 126);

    glVertex2f(-40, 111);

    glVertex2f(-53, 110);

    glEnd();

    //banana leaf 2 lower

    glColor3f(0.0, 0.5, 0.0);

    glBegin(GL_TRIANGLES);

    glVertex2f(-53, 110);

    glVertex2f(-43, 127);

    glVertex2f(-40, 120);

    glEnd();


    //banana leaf 2 upper

    glColor3f(0.0, 0.5, 0.0);

    glBegin(GL_QUADS);

    glVertex2f(-43, 127);

    glVertex2f(-38, 121);

    glVertex2f(-30, 133);

    glVertex2f(-35, 140);

    glEnd();


    //banana leaf 3 lower

    glColor3f(0.0, 0.5, 0.0);

    glBegin(GL_TRIANGLES);

    glVertex2f(-53, 110);

    glVertex2f(-52, 126);

    glVertex2f(-46, 126);

    glEnd();

    //banana leaf 3 upper

    glColor3f(0.0, 0.5, 0.0);

    glBegin(GL_QUADS);

    glVertex2f(-52, 126);

    glVertex2f(-45, 130);

    glVertex2f(-40, 140);

    glVertex2f(-50, 145);

    glEnd();


    //banana leaf middle

    glColor3f(0.0, 0.3, 0.0);

    glBegin(GL_TRIANGLES);

    glVertex2f(-53, 110);

    glVertex2f(-55, 125);

    glVertex2f(-57, 110);

    glEnd();

    //banana leaf 4 lower
    glColor3f(0.0, 0.5, 0.0);

    glBegin(GL_TRIANGLES);

    glVertex2f(-57, 110);

    glVertex2f(-61, 130);

    glVertex2f(-65, 125);

    glEnd();

    //banana leaf 4 upper

    glColor3f(0.0, 0.5, 0.0);

    glBegin(GL_QUADS);

    glVertex2f(-61, 130);

    glVertex2f(-64, 145);

    glVertex2f(-75, 140);

    glVertex2f(-70, 130);

    glEnd();


    //banana leaf 5 lower
    glColor3f(0.0, 0.5, 0.0);

    glBegin(GL_TRIANGLES);

    glVertex2f(-57, 110);

    glVertex2f(-68, 125);

    glVertex2f(-70, 120);

    glEnd();

    //banana leaf 5 upper

    glColor3f(0.0, 0.5, 0.0);

    glBegin(GL_QUADS);

    glVertex2f(-68, 125);

    glVertex2f(-80, 125);

    glVertex2f(-85, 135);

    glVertex2f(-80, 140);

    glEnd();


    //banana leaf 6 lower
    glColor3f(0.0, 0.5, 0.0);

    glBegin(GL_TRIANGLES);

    glVertex2f(-57, 110);

    glVertex2f(-70, 116);

    glVertex2f(-70, 110);

    glEnd();

    //banana leaf 6 middle

    glColor3f(0.0, 0.5, 0.0);

    glBegin(GL_QUADS);

    glVertex2f(-70, 116);

    glVertex2f(-75, 110);

    glVertex2f(-80, 113);

    glVertex2f(-80, 120);

    glEnd();


    //banana leaf 6 upper

    glColor3f(0.0, 0.5, 0.0);

    glBegin(GL_QUADS);

    glVertex2f(-80, 120);

    glVertex2f(-85, 115);

    glVertex2f(-95, 120);

    glVertex2f(-95, 127);

    glEnd();


    //house base

    glColor3f(0.3, 0.0, 0.0);

    glBegin(GL_QUADS);

    glVertex2f(-80, 70);

    glVertex2f(-20, 70);

    glVertex2f(-20, 75);

    glVertex2f(-80, 75);

    glEnd();


    //Kash full
    glColor3f(0.3, 0.0, 0.0);

    glBegin(GL_QUADS);

    glVertex2f(-95, 10);

    glVertex2f(-94, 11);

    glVertex2f(-94, 20);

    glVertex2f(-95, 20);

    glEnd();
    // 1
    glColor3f(0.3, 0.3, 0.3);

    glBegin(GL_TRIANGLES);

    glVertex2f(-99, 20);

    glVertex2f(-90, 20);

    glVertex2f(-95, 25);

    glEnd();


    // 2
    glColor3f(0.3, 0.3, 0.3);

    glBegin(GL_TRIANGLES);

    glVertex2f(-99, 22);

    glVertex2f(-90, 22);

    glVertex2f(-95, 27);

    glEnd();

    // 3
    glColor3f(0.3, 0.3, 0.3);

    glBegin(GL_TRIANGLES);

    glVertex2f(-99, 24);

    glVertex2f(-90, 24);

    glVertex2f(-95, 29);

    glEnd();

    // 4
    glColor3f(0.3, 0.3, 0.3);

    glBegin(GL_TRIANGLES);

    glVertex2f(-99, 26);

    glVertex2f(-90, 26);

    glVertex2f(-95, 31);

    glEnd();

    // 4
    glColor3f(0.3, 0.3, 0.3);

    glBegin(GL_TRIANGLES);

    glVertex2f(-99, 28);

    glVertex2f(-90, 28);

    glVertex2f(-95, 33);

    glEnd();


    // 5
    glColor3f(0.3, 0.3, 0.3);

    glBegin(GL_TRIANGLES);

    glVertex2f(-99, 30);

    glVertex2f(-90, 30);

    glVertex2f(-95, 35);

    glEnd();

    // 5
    glColor3f(0.3, 0.3, 0.3);

    glBegin(GL_TRIANGLES);

    glVertex2f(-99, 33);

    glVertex2f(-90, 33);

    glVertex2f(-95, 37);

    glEnd();


    // 6
    glColor3f(0.3, 0.3, 0.3);

    glBegin(GL_TRIANGLES);

    glVertex2f(-99, 35);

    glVertex2f(-90, 35);

    glVertex2f(-95, 39);

    glEnd();


    // 7
    glColor3f(0.3, 0.3, 0.3);

    glBegin(GL_TRIANGLES);

    glVertex2f(-99, 37);

    glVertex2f(-90, 37);

    glVertex2f(-95, 41);

    glEnd();

    //kash full 2
    glColor3f(0.3, 0.0, 0.0);

    glBegin(GL_QUADS);

    glVertex2f(-86, 15);

    glVertex2f(-85, 16);

    glVertex2f(-85, 25);

    glVertex2f(-86, 25);


    glEnd();
    //1
    glColor3f(0.3, 0.3, 0.3);

    glBegin(GL_TRIANGLES);

    glVertex2f(-90, 25);

    glVertex2f(-80, 25);

    glVertex2f(-85, 30);

    glEnd();

    //2
    glColor3f(0.3, 0.3, 0.3);

    glBegin(GL_TRIANGLES);

    glVertex2f(-90, 27);

    glVertex2f(-80, 27);

    glVertex2f(-85, 32);

    glEnd();

    //3
    glColor3f(0.3, 0.3, 0.3);

    glBegin(GL_TRIANGLES);

    glVertex2f(-90, 29);

    glVertex2f(-80, 29);

    glVertex2f(-85, 34);

    glEnd();

    //4
    glColor3f(0.3, 0.3, 0.3);

    glBegin(GL_TRIANGLES);

    glVertex2f(-90, 31);

    glVertex2f(-80, 31);

    glVertex2f(-85, 36);

    glEnd();


    //4
    glColor3f(0.3, 0.3, 0.3);

    glBegin(GL_TRIANGLES);

    glVertex2f(-90, 31);

    glVertex2f(-80, 31);

    glVertex2f(-85, 36);

    glEnd();

    //4
    glColor3f(0.3, 0.3, 0.3);

    glBegin(GL_TRIANGLES);

    glVertex2f(-90, 33);

    glVertex2f(-80, 33);

    glVertex2f(-85, 38);

    glEnd();


    //kash full 3
    glColor3f(0.3, 0.0, 0.0);

    glBegin(GL_QUADS);

    glVertex2f(-84, 11);

    glVertex2f(-83, 11);

    glVertex2f(-75, 25);

    glVertex2f(-75, 25);


    glEnd();

    glColor3f(0.3, 0.3, 0.3);

    glBegin(GL_TRIANGLES);

    glVertex2f(-78, 28);

    glVertex2f(-70, 23);

    glVertex2f(-70, 31);

    glEnd();
    // 2

    glColor3f(0.3, 0.3, 0.3);

    glBegin(GL_TRIANGLES);

    glVertex2f(-78, 32);

    glVertex2f(-65, 28);

    glVertex2f(-65, 35);

    glEnd();

    // 3

    glColor3f(0.3, 0.3, 0.3);

    glBegin(GL_TRIANGLES);

    glVertex2f(-74, 36);

    glVertex2f(-62, 30);

    glVertex2f(-65, 40);

    glEnd();





























    //fan stand

    glColor3f(0.1, 0.1, 0.1);

    glBegin(GL_TRIANGLES);

    glVertex2f(70, 25);

    glVertex2f(90, 25);

    glVertex2f(80, 75);

    glEnd();




    // Call the drawFan function
    drawFan();

    // Rotate the fan
    fanRotationAngle += 1.0f;
    if (fanRotationAngle >= 360.0f) {
        fanRotationAngle -= 360.0f;
    }


    // Rest of the code remains the same



    // Call the drawBoat function
    drawBoat();

    // Move the boat
    boatX += 0.01f;
    if (boatX >= 100.0f) {
        boatX = -40.0f;
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
