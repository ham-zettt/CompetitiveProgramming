# CP Note (C++ used)

## Brute Force
suatu strategi dengan cara **mecoba semua kemungkinan** (complete search). Sehingga pasti menemukan solusi yang diharapkan, tetapi memiliki waktu yang relatif lama.

Contoh persoalan:
> Diberikan sebuah persamaan: p+q+r = 0. Masing-masing dari p, q, dan r harus merupakan anggota dari {a1,a2,...,aN}. Diketahui pula bahwa semua nilai {a1,a2,...,aN}
unik. Berapa banyak triplet hp,q,ri berbeda yang memenuhi persamaan tersebut?

Solusi Brute Force:
Coba semua kemungkinan dengan menggunakan perulangan sebanyak n (banyaknya variabel). Karena n=3, maka waktu kompleksitasnya $$O(n^3)$$
- Algoritma dapat doptimasi dengan cara: setelah menentukan nilai p dan q, tentukan nilai r dengan -(p+q). Lalu tentukan apakah nilai r ada di anggota himpunan dengan menggunakan binary search agar lebih cepat. Jika ada maka sudah pasti bernilai 0, jadi simpan hasil dari p+q+r. Waktu kompleksitasnya $$O(n^2 log n)$$

### > Brute Force Permutasi
Untuk menampilkan semua permutasi bisa menggunakan iterasi biasa, tetapi jumlah iterasi tidak bisa ditentukan, karena mengikuti jumlah data (n). Maka solusinya adalah rekursif:
```cpp
char catat[n];
bool pernah[n];  // all false

void permutation(int depth){
    // base case
	if(depth == n){
  		for(int i=0; i<n; i++){    // loop hasil akhir
			cout << catat[i];
		}
		cout << endl;
		
	} else {
		for(int i=0; i<n; i++){
    		// sebelum masuk ke rekursif, cek apakah
    		// karakter sudah pernah digunakan. Agar
    		// tidak ada digit berulang
			if(!pernah[i]){
				pernah[i] = true;
				catat[depth] = arr[i];  // catat hasil permutasi
				permutation(depth + 1);
				pernah[i] = false;  // reset untuk depth lainnya
			}
		}
	}
}
```
Dimulai dari `permutation(0)`, dari situ akan bercabang sebanyak n, dan seterusnya.

### > Brute Force Kombinasi
untuk melakukan kombinasi, cukup mengubah perulangan for pada bagian rekursi. Ubah agar perulangan dimulai dari _angka yang dicatat + 1_. Jadi angka sebelumnya tidak akan dicatat lagi. Sehingga _boolean pernah_ tidak perlu dipakai
`i = catat[depth-1] + 1`

## Greedy
suatu strategi dengan **mencari solusi paling optimal hingga ke subproblem**, sehingga memiliki waktu eksekusi yang cepat dan mudah diimplementasikan. 

Greedy dapat dilakukan saat:
- Solusi optimal dapat ditentukan dari subproblem
- Memiliki _Greedy Choice_

**Greedy choice** merupakan langkah yang akan menghasilkan solusi optimal. Contoh: 
> Anda ingin menukar uang Rp12.000 dengan lembaran uang kertas Rp5.000,
Rp2.000, dan Rp1.000. Anda ingin menukar dengan jumlah lembaran sesedikit
mungkin.

- Problem: proses penukaran uang (n)
- Subproblemnya: proses penukaran selanjutnya setelah menukar uang ke-n
- Greedy choice-nya: menukar uang dengan nominal sebesar mungkin

Persoalan tersebut dapat dilakukan dengan Greedy karena terdapat subproblem yag juga dapat ditentukan greedy choicenya.

**Kelemahan Greedy**
Tidak semua persoalan dapat diselesaikan dengan Greedy. Sesuai persoalan diatas, jika uang yang tersedia untuk ditukar adalah Rp5.000, Rp4.000, dan Rp1.000 , maka Greedy tidak memberikan solusi optimal

- Solusi Greedy:  Rp5.000, Rp5.000, Rp1.000, Rp1.000
- Solusi optimal:  Rp4.000, Rp4.000, Rp4.000

## For Your Information
### Print Variable type

```cpp
cout << typeid(var).name();
```

### Prototype function

By default, C++ function have to be declared before the main function. To create it below, make a prototype as a declaration.
```cpp
void solve(int a, int b);
int main(){
	...
}
void solve(int a, int b){
	...
}
```

### Get single line input

```cpp
getline(cin, input);
```

### goto Function
Go to the spesific flag
```cpp
flagName:
  print("go to here");

goto flagName;
```

### Get each integer
Use divide and modulo
```cpp
int n = 25;
while(n){
  digit = n%10;
  n/=10;
}
```

### Determine its decimal or not

```cpp
#include <cmath>
if(i/3 == floor(i/3)) isDecimal = false;
```

### Determine its a perfect square
```cpp
temp = round(sqrt(i));
if(temp*temp == i) isPerfect = true;
```

### Sort pair based on second (boolean)
```cpp
bool sort_second(pair<int, int> &a, pair<int, int> &b){
	return a.second < b.second;
}
```

## Algorithm

### Linear search

```cpp
for(int i=0; i<n; i++){
	if(arr[i] == search) isFound = true;
}
```

### Binary search
Pengurutan seperti halnya mencari kata didalam kamus. 
```cpp
mid = 0;
ans = 0;
left = 0;
right = arr.length()-1;

while(left<=right and ans==0){
	mid = (left+right) / 2;
	if(search<arr[mid]) right = mid-1;
	else if(search>arr[mid]) left = mid+1;
	else ans = arr[mid];
}
```

### Bubble Sort
Time complexity: $$O(n^2)$$
```cpp
for(int i=0; i<n; i++){
	for(int j=i+1; j<n; j++){
		if(arr[j] < arr[i]){
			temp = arr[i]
			arr[i] = arr[j]
			arr[j] = temp
		}
	}
}
```

### Selection Sort
Time complexity: $$O(n^2)$$
```cpp
for(int i=0; i<n; i++){
	smallest = 0;
	idx = i;

	//find smallest value
	for(int j=i+1; j<n; j++){
		if(arr[j] < smallest){
			smallest = arr[j];
			idx = j;  //save the index
		}
		temp = arr[i];
		arr[i] = arr[idx];
		arr[idx] = temp;
	}
}
```

### Counting Sort
Pengurutan dengan cara menghitung berapa kali jumlah elemen x muncul . Lalu, kembalikan semua dari elemen terkecil (ascending)
```cpp

```

### Sorting with Parameter Function
```cpp
bool sc(int a, int b){
	if(a%b != 0) return true;
	else return false;

int main(){
	sort(arr, arr+n, sc);
}
```

### Print all substring
use s.substr(start, substring length);
```cpp
for(int i=0; i<s.length(); i++){
		for(int j=1; j<=s.length()-i; j++){
			cout << s.substr(i,j) << endl;
		}
	}
```


### Maximum subarray sum
Basically, it needs 2 iteration. Time complexity: $$O(n^2)$$
```cpp
int ans = 0;
for(int i=0; i<n; i++){
  int sum = 0
  for(int j=i; j<n; j++){
    sum += arr[j];
    ans = max(ans, sum);
  }
}
```

Algorithm with single iteration. Time complexity: $$O(n)$$
```cpp
int best = 0, sum = 0;
for(int i=0; i<n; i++){
  sum = max(arr[i], sum+arr[i]);
  ans = max(ans, sum);
}
```

## STRING

---

### Uppercase and lowercase

```cpp
//to check
isupper(c)
islower(c)
//to convert
toupper(c)
tolower(c)
```

### Convert string <-> integer

```cpp
stoi(s);  // string to integer
to_string(i);  // integer to string
```

### Erase a character from string
```cpp
s.erase();      // erase all
s.erase(2);     // erase from index 2 
s.erase(2, 4);  // earse from index 2, up to 4 character
```

## ARRAY

---

### Array summary

```cpp
accumulate(arr, arr+arrLength, sum)
```

### Fill array

```cpp
#include <cstring>
memset(arr, 0, sizeof(arr))  //only for 0 value
```

### Sort array ascending/descending

```cpp
#include <algorithm>
sort(arr, arr+n); //ascending
sort(arr, arr+n, greater<int>()); //descending
sort(arr, arr+n, greater<double,int>()); //descending (pair)
```

### How many element types in array

```cpp
int count = 0;
bool isUnique = true

for(int i=0; i<n; i++){
	for(int j=i+1; j<n; j++){
		if(arr[i] == arr[j]){
			isUnique = false;  //same element detected
			break;
	}
	
	if(isUnique) count++;
}
```

### Find an element in array

```cpp
if(find(begin(arr), end(arr), "a") != end(arr)){
  // Element found
}
```

### Check all of the array element

```cpp
#include <algorithm>
if(all_of(begin(arr), end(arr), [](bool b){return b==true};)){
	isAllTrue = true;
}
```

### Permutation

```cpp
#include <algorithm>
next_permutation(begin(arr), end(arr));
```

## VECTOR
### Function
```cpp
// initialize with size and value 
vector<int> vt(10, 0);  // size=10; element=0

// get vector size
int n = vt.size();

// modify element
vt.push_back()  //add element
vt.pop_back()   //remove last element
vt.insert(vt.begin() + (indexTarget) , value)   //insert at index
vt.clear()   //erase all element
vt.erase(vt.begin + (indexTarget))   //erase at index
vt.empty()   //check empty
```

## FUNCTION

---

### Reverse number

```cpp
rev = 0
while(num>0){
	rev = (rev*10) + (num%10);
	num /= 10;
}
```

### Prime number

```cpp
int n; //angka yang dicek
bool isPrime = true;

for(int i=2; i*i<=n; i++){
	if(n/i == 0){
		isPrime = false;
		break;
	}
}

if(isPrime) cout << "Prime";
else cout << "Not Prime";
```

### GCD with Euclid Method 

```cpp
int euclid(int a, int b){
	if(b==0) return a;
		else return euclid(b, %b);
}
```