// Vũ Minh Nhậtdsd
// 3116410172
// FCFS Disk Scheduling algorithm

#include <bits/stdc++.h>
using namespace std;

int size = 8;

void FCFS(int arr[], int head)
{
	int seek_count = 0;
	int distance, cur_track;

	for (int i = 0; i < size; i++) {
		cur_track = arr[i];

		// tính khoảng cách tuyệt đối
		distance = abs(cur_track - head);

		// tăng biến đếm
		seek_count += distance;

		// gán biến head = vị trí hiện tại của đầu đọc
		head = cur_track;
	}

	cout << "Tong cac buoc dich chuyen = "
		<< seek_count << " buoc" << endl;

	// Sơ đồ tìm kiếm giữ nguyên thứ tự như ds thứ tự các track của đề bài
	cout << "So do dich chuyen theo FCFS:" << endl;

	for (int i = 0; i < size; i++) {
		cout << arr[i] << endl;
	}
}

//--------MAIN--------//
int main()
{

	// ds số thứ tự các track
	int arr[size] = { 98, 183, 37, 122, 14, 124, 65, 67 };
	//vị trí hiện tại của đầu đọc đĩa
	int head = 53;

	FCFS(arr, head);

	return 0;
}
