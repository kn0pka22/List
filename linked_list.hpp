#include<iostream>
#include<cstring>
#include <fstream>


struct ListNode {
	int value;
	ListNode* next=nullptr;
};


/*
Требуется написать функцию, которая меняет местами соседние пары элементов списка, то есть для
всех k меняет местами ячейки списка с порядковыми номерами 2k и 2k + 1.

*/

ListNode* Process(ListNode* head);

/*
Написать программу, которая считывает список произвольного размера с клавиатуры и выводит
результат работы функции на экран. В самой функции не должно быть операций ввода/вывода.
*/
