#include "random.h"

int Random(int min, int max)
{
	srand(time(NULL));
	//time(NULL) вызывает количество милисекунд которые прошли с января 1970 года, при каждом вызове будет новая точка отсчёта
	//srand()- установка начальной точки генерирования чисел

	int x = min + rand() % (max - min + 1);

	return x;
}