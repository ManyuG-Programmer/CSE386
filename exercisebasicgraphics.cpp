/****************************************************
 * 2016-2023 Eric Bachmann and Mike Zmuda
 * All Rights Reserved.
 * NOTICE:
 * Dissemination of this information or reproduction
 * of this material is prohibited unless prior written
 * permission is granted.
 ****************************************************/

#include <ctime>
#include <vector>
#include "defs.h"
#include "utilities.h"
#include "framebuffer.h"
#include "colorandmaterials.h"
#include "rasterization.h"
#include "io.h"

FrameBuffer frameBuffer(WINDOW_WIDTH, WINDOW_HEIGHT);

void render() {
	frameBuffer.clearColorBuffer();
	drawLine(frameBuffer, 0, 0, 100, 100, red);
	drawLine(frameBuffer, 100, 100, 200, 100, blue);
	frameBuffer.showColorBuffer();
}

void resize(int width, int height) {
	frameBuffer.setFrameBufferSize(width, height);
	glutPostRedisplay();
}

int main(int argc, char* argv[]) {
	//Original
	/*
	graphicsInit(argc, argv, __FILE__);

	glutDisplayFunc(render);
	glutReshapeFunc(resize);
	glutKeyboardFunc(keyboardUtility);
	glutMouseFunc(mouseUtility);

	frameBuffer.setClearColor(paleGreen);

	glutMainLoop();

	return 0;
	*/
	
		std::cout << pointingVector(dvec3(1.0000000000, 1.0000000000, 1.0000000000), dvec3(2.0000000000, 2.4142135624, 2.0000000000)) << std::endl;
		std::cout << pointingVector(dvec3(1.0000000000, 1.0000000000, 1.0000000000), dvec3(-0.0000000000, 2.4142135624, 2.0000000000)) << std::endl;
		std::cout << pointingVector(dvec3(1.0000000000, 1.0000000000, 1.0000000000), dvec3(2.0000000000, - 0.4142135624, 2.0000000000)) << std::endl;
		std::cout << pointingVector(dvec3(1.0000000000, 1.0000000000, 1.0000000000), dvec3(-0.0000000000, -0.4142135624, 2.0000000000) ) << std::endl;
		std::cout << pointingVector(dvec3(2.0000000000, 2.4142135624, 2.0000000000), dvec3(1.0000000000, 1.0000000000, 1.0000000000)) << std::endl;
		std::cout << pointingVector(dvec3(-0.0000000000, 2.4142135624, 2.0000000000), dvec3(1.0000000000, 1.0000000000, 1.0000000000)) << std::endl;
		std::cout << pointingVector(dvec3(2.0000000000, - 0.4142135624, 2.0000000000), dvec3(1.0000000000, 1.0000000000, 1.0000000000)) << std::endl;
		std::cout << pointingVector(dvec3(-0.0000000000, - 0.4142135624, 2.0000000000), dvec3(1.0000000000, 1.0000000000, 1.0000000000)) << std::endl;

		std::cout << pointingVector(dvec3(1.0000000000, 1.0000000000, 1.0000000000), dvec3(1.5000000000, 1.7071067812, 1.5000000000)) << std::endl;
		std::cout << pointingVector(dvec3(1.0000000000, 1.0000000000, 1.0000000000), dvec3(0.5000000000, 1.7071067812, 1.5000000000)) << std::endl;
		std::cout << pointingVector(dvec3(1.0000000000, 1.0000000000, 1.0000000000), dvec3(1.5000000000, 0.2928932188, 1.5000000000)) << std::endl;
		std::cout << pointingVector(dvec3(1.0000000000, 1.0000000000, 1.0000000000), dvec3(0.5000000000, 0.2928932188, 1.5000000000)) << std::endl;
		std::cout << pointingVector(dvec3(1.5000000000, 1.7071067812, 1.5000000000), dvec3(1.0000000000, 1.0000000000, 1.0000000000)) << std::endl;
		std::cout << pointingVector(dvec3(0.5000000000, 1.7071067812, 1.5000000000), dvec3(1.0000000000, 1.0000000000, 1.0000000000)) << std::endl;
		std::cout << pointingVector(dvec3(1.5000000000, 0.2928932188, 1.5000000000), dvec3(1.0000000000, 1.0000000000, 1.0000000000)) << std::endl;
		std::cout << pointingVector(dvec3(0.5000000000, 0.2928932188, 1.5000000000), dvec3(1.0000000000, 1.0000000000, 1.0000000000)) << std::endl;

	

	return 0;
}