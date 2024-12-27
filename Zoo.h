#include <iostream>
#include "Animal.h"
#ifndef ZOO_H_
#define ZOO_H_
#endif


class Zoo {
private:
	Animal* animals[10] = {};					// 동물원의 정원 수 만큼 배열 선언
	int aniamlCount = 0;						// 배열의 인덱스 값

public:
	Zoo() {};

	void addAnimal(Animal* animal) {
		if (aniamlCount >= 10) {				// 동물원의 정원이 10마리인데 그 이상 동물이 추가될 경우를 막기위한 조건문
			cout << "정원 초과 \n";
			return;
		}
		animals[aniamlCount] = animal;
		aniamlCount++;
	}

	void performActions() {
		for (int i = 0; i < 10; i++) {
			if (animals[i] == NULL) {			// 동물의 수가 정원 수 보다 적을 경우에 사용할 조건문
				break;
			}
			animals[i]->makeSound();
		}
	}
	~Zoo() {
		for (int i = 0; i < 10; i++) {
			delete animals[i];
		}
	}
};