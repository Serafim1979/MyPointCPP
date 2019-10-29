#ifndef POINT_H
#define POINT_H
////////////////////////////////////////////////
class Point
{
private:
	int x, y; 
public:
	int GetX()const  //inline default
	{
		return x;
	}
	int GetY()const;
	void SetX(int);
	void SetY(int);

	void Print()const;
	void Move(int delta_x, int delta_y);

	double Dist(const Point& b)const;

	friend double fDist(const Point& a, const Point& b);
};
////////////////////////////////////////////////
inline int Point::GetY()const
{
	return y;
}

#endif // !POINT_H

