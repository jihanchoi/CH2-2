#include <iostream>
#include "Zoo.h"
#include <cstdlib>
#include <ctime>

using namespace std;

Animal* createRandomAnimal() {
	Animal* species[3];							// 동물의 종류 수 만큼 배열 생성

	species[0] = new Dog();						// 배열에 동물들을 생성
	species[1] = new Cat();
	species[2] = new Cow();

	int num = rand() % 3;						// 동물의 종류 수 안에서의 랜덤 값

	return species[num];
}

int main() {
	srand((unsigned int)time(NULL));			// 랜덤값이 고정되지 않게 하기 위함 이유는 모르지만
												// main이 아닌 다른 함수에서 선언시 랜덤 값이 고정이 되어버림
	Zoo zoo;

	for (int i = 0; i < 10; i++) {				// 추가할 동물의 마리수 만큼 반복문으로 돌려 동물 생성
		zoo.addAnimal(createRandomAnimal());
	}
	zoo.performActions();
	return 0;
}
