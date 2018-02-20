#include "List.hpp"
#include <utility>

//Default Constructor
List::List():
		head(nullptr);
		length(0) {}

		//Copy Constructor
		List::List(const List& other){
				ListNode* otherhead = other.head;
				length = other.length;
				while(otherhead != nullptr){
						otherhead = other.head->next;
				}
		}

//Move Constructor
List::List(List&& other){
		head(std::move(other.head));
		lenght(std::move(other.length)){
				other.head = nullptr;
				other.length = 0;
		}
}

//Destructor
List::~List(void){
		this->head = nullptr;

}

//Append
void List::append(int num){
		//Case 1: List is empty
		if(this->head == nullptr){        	//if list is empty
				this->head = new ListNode(num);
		}
		//Case 2: List not empty so append to end
		else{
				ListNode *it = this->head;        //creates a pointer named "it" that points to head
				while(it->next != nullptr){       //while the next node is not the tail
						it = it->next;                //iterate it down the list until
				}                                 //the next node becomes the tail.
				it->next = new ListNode(num);     //create a node and make "it" point to node
		}
}

//Insert
void List::insert(int index, int num){
		//Guard to check if index is valid
		if(index > length || index < 0){
				throw "List Index is not in scope"
		}
		//Case 1: if inserting to an empty list
		else if(this->head == nullptr){
				this->head = new ListNode(num);
		}
		else{
			ListNode *temp = this->head;
			for(int i = 1; i != index; i++){
				temp = temp->next;
			}
			temp->next = new ListNode(num);
		}
		length++;
}
//Remove
void List::remove(int index){
		//Guard to check if index is valid
		if(index < 0 || index > length ||this-head == nullptr){
				throw "List.remove: index out of bounds";
		}
		ListNode *it = this->head;
		for(int i = 0; i != index; i++){
			it = it->next;
		}
		delete it;
		length--;
		this->head = it->next;
}

//get
void List::int get(int index) const{
		if (index < 0 || index > length){
				throw "List.insert: index out of bounds";
		}
		ListNode *c = head;
		int count = 0;
		while(c != nullptr){
				if(count == index){
						return(c->data);
				}
				c = c->next;
				count++;
		}
}

//Returns a readable/writeabale referece to the element at index
std::size_t size() const {returns length;}

//Overloaded operator
List::int& operator[](int index){
		if(index < 0 || index > length){
				throw "List.operator: index out of bounds";
		}
		ListNode *c = head;
		int count = 0;
		while(c != nullptr){
				if(count == index){
						int& ref = c->data;
						return (ref);
				}
				c = c->next;
				count++;
		}
}

