#include <cmath>
#include <iostream>
#include <Eigen/Core>

int main()
{
	float a = 1.0, b = 2.0;
	std::cout << a << std::endl;
	std::cout << a / b << std::endl;
	std::cout << std::sqrt(a) << std::endl;
	std::cout << std::acos(-1) << std::endl;
	std::cout << std::sin(30.0 / 180.0 * acos(-1)) << std::endl;

	std::cout << "-----------------------------" << std::endl;

	// Example of vector
	std::cout << "Example of vector \n";
	// vector definition
	Eigen::Vector3f v(1.0f, 2.0f, 3.0f);
	Eigen::Vector3f w(1.0f, 0.0f, 0.0f);
	// vector output
	std::cout << "Example of output \n";
	std::cout << v << std::endl;
	// vector add
	std::cout << "Example of add \n";
	std::cout << v + w << std::endl;
	// vector scalar multiply
	std::cout << "Example of scalar multiply \n";
	std::cout << v * 3.0f << std::endl;
	std::cout << 2.0f * v << std::endl;

	// 向量点积
	std::cout << "Example of dot product \n";
	float dot_product = v.dot(w); // 使用成员函数dot()
	std::cout << "v dot w (using dot function): " << dot_product << std::endl;

	// 或者使用重载的*操作符
	// 注意：Eigen中重载的*操作符默认是矩阵乘法，对于向量，它被重载为点积
	dot_product = v.transpose() * w; // 对于非列向量，需要先转置
	std::cout << "v dot w (using * operator): " << dot_product << std::endl;

	std::cout << "-----------------------------" << std::endl;


	Eigen::Matrix3f i, j;
	i << 1.0, 2.0, 3.0,
		4.0, 5.0, 6.0,
		7.0, 8.0, 9.0;
	j << 2.0, 3.0, 1.0,
		4.0, 6.0, 5.0,
		9.0, 7.0, 8.0;

	// 矩阵输出
	std::cout << "Example of output \n";
	std::cout << "Matrix i:\n" << i << std::endl;

	// 矩阵加法
	std::cout << "Example of matrix add \n";
	std::cout << "i + j:\n" << i + j << std::endl;

	// 矩阵数乘
	std::cout << "Example of matrix scalar multiply \n";
	std::cout << "i * 2.0:\n" << i * 2.0 << std::endl;

	// 矩阵乘法
	std::cout << "Example of matrix multiply \n";
	std::cout << "i * j:\n" << i * j << std::endl;

	// 矩阵乘向量
	std::cout << "Example of matrix multiply vector \n";
	std::cout << "i * v:\n" << i * v << std::endl;

	std::cout << "-----------------------------" << std::endl;


	//给定一个点 P = (2, 1), 将该点绕原点先逆时针旋转 45 ◦ ，再平移(1, 2), 计算出变换后点的坐标（要求用齐次坐标进行计算）。
	Eigen::Vector3f p(2.0f, 1.0f, 1.0f);
	Eigen::Matrix3f rotateMat, transMat;
	rotateMat << std::cos(45.0 / 180.0 * acos(-1)), -std::sin(45.0 / 180.0 * acos(-1)), 0
		, std::sin(45.0 / 180.0 * acos(-1)), std::cos(45.0 / 180.0 * acos(-1)), 0
		, 0, 0, 1;
	transMat << 1.0f, 0, 1.0f
		, 0, 1.0f, 2.0f
		, 0, 0, 1.0f;
	p = transMat * rotateMat * p;
	std::cout << "P: " << p[0] << ", " << p[1] << std::endl;

	return 0;


}