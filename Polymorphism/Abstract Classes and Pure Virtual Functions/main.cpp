#include<iostream>
#include<vector>
/*
Making a class Abstract and using pure virtual functions
*/


using namespace std;

class Shape {

	public:
		virtual void draw() = 0;
		virtual void rotate() = 0;
		virtual ~Shape() {};
};

class Close_shape : public Shape {

public:
	virtual ~Close_shape() {};
};

class Circle : public Close_shape {

public:
	virtual void draw() override {
		cout << "Draw : Circle\n";
	}

	virtual void rotate() override {
		cout << "Rotating : Circle\n";
	}
	virtual ~Circle() {};
};

class Triangle : public Close_shape {

public:
	virtual void draw() override {
		cout << "Draw : Triangle\n";
	}

	virtual void rotate() override {
		cout << "Rotating : Triangle\n";
	}
	virtual ~Triangle() {};
};

class Square : public Close_shape {

public:
	virtual void draw() override {
		cout << "Draw : Square\n";
	}

	virtual void rotate() override {
		cout << "Rotating : Square\n";
	}
	virtual ~Square() {};
};


void refresh_screen(std::vector<Shape*>  &shp) {

	for (const auto obj : shp) {
		obj->draw();
	}

}

void main() {

/*	Circle c;
	c.draw();
	c.rotate();


	Triangle t;
	t.draw(); */


	Shape *p_circle = new Circle();
	Shape *p_triangle = new Triangle();

	/*
	p_circle->draw();
	p_triangle->rotate();
	*/
	Shape *s1 = new Circle();
	Shape *s2 = new Triangle();
	Shape *s3 = new Square();

	std::vector<Shape *> shapes;
	shapes.push_back(s1);
	shapes.push_back(s2);
	shapes.push_back(s3);


	refresh_screen(shapes);

	while (1);
}






