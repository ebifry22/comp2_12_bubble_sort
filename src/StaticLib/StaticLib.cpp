﻿#define WIN32_LEAN_AND_MEAN             // Windows ヘッダーからほとんど使用されていない部分を除外する
#include "Windows.h"                    // Windows API の機能定義

#include "../include/lib_func.h"

// バブルソート(引数が不適切であればfalseを返す)
bool bubble_sort(item* begin, const item* end)
{
	if (begin == NULL || end < begin)
	return false;

	for (item* i = begin; i < end; i++)
	{
		for (item* j = i + 1; j < end; j++)
		{
			if (j->key < i->key)
			{
				item temp = *i;
				*i = *j;
				*j = temp;
			}
		}
		if (i == end - 1)
		{
			begin = i;
		}
	}
	return true;
}
