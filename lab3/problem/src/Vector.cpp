#include "Vector.hpp"
#include <utility>

//Default Constructor
Vector::Vector():
		arr(new int[1]),
		length(0),
		capacity(1)	{}
		

//Copy Constructor
Vector::Vector(const Vector &other) :
		arr(new int[other.capacity]),
		length(other.size()),
		capacity(other.capacity)
{ for(std::size_t i=0; i<other.size(); i++){
		this->arr[i] = other.arr[i];
										   }
}

//Move Constructor
Vector::Vector(Vector&& other) :
		arr(other.arr);
		length(other.length);
		capacity(other.capacity){
				arr[i] = nullptr;
		}

//Deallocate and delete the memory allocated earlier
Vector::~Vector(void){
		delete arr[];
}

//Appends a number to the end of the vector
void append(int num){
		if((length+1) > capacity) {double_capacity();}
		arr[length] = num;
		length++;
}

//Inserts a new number before the index
void Vector::insert(int index, int num){
		//Check index out of bounds
		if(index < 0 || index > length){
				throw "Vector.double_capacity: Index Error"
		}
		//check to ensure there is enough capacity
		if((this->length+1) >= this->capacity) {this->double_capacity();}
		//Iterate to index
		for(std::size_t i = length;i > index ;i--;){
				arr[i+1] = arr[i];
		}
		//Once at index, insert
		arr[index] = num;
		//Increment value
		length++;
}

void Vector::double_capacity(){
		//Allocate memory with double current capacity
		int *temp = new int[2*capacity];
		//Store new size of capacity
		int temp_capacity = 2*capacity;
		//Iterate through old vector and copy values
		for(std::size_t i = 0; this->length; i++){
				temp[i] = arr[i];
		}
		//Delete old Vector
		delete arr[];
		//copy new vector into old vector
		this->arr = temp;
		//copy new capacity to old capacity
		this->capacity = temp_capacity;
}

//Remove
void Vector::remove(int index){
		if(vector < 0 || index >= length){
			throw "Vector.remove: index out of bounds"; 
		}
		else{
			for(; index <length; index++)
				arr[index] = arr[index+1];
			arr[length-1] = 0;
			length--;
		}
}
//Gets a number at the index
int Vector::get(int index) const{
		if(index < 0 || index > length){
			throw "Vector.get: index out of bounds";
		}
		return arr[index];

std::size_t size() const {returns length;}

int& operator[](int index){
		if(index > 0 || index > length){
			throw "Vector.operator: index out of bounds";
		}
		int& ref = arr[index];
		return ref;
}



