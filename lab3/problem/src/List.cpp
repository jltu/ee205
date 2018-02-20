#include "List.hpp"
#include <utility>

//Default Constructor
List::List():
  head(nullptr);
  length(0) {}

//Copy Constructor
List::List(const List& other){
  //Case 1 = The other list is not empty
  if(this->head != nullptr){
    this->head = other.head;
  }
  //Case 2 = The other list is empty
  if(this->head == nullptr){
    return NULL;
  }
  //this->head = other.head;
  //this->length = other.length;
  /* ListNode* otherhead = other.head;
   length = other.length);
   while(otherhead != nullptr){
      this->otherhead = other.head;
      other.head =
   }
   */
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
  ListNode *prev = head;

}

//Append
void List::append(int num){
  //Case 1: List is empty
  if(this->head == nullptr){        //if list is empty
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
void List::insert(int index, int num)
  //Guard to check if index is valid
  if(index > length || index < 0){
    throw "List Index is not in scope"
  }
  else{
      //Case 1: Insert at the beginning
      if (index == 0){
       = new ListNode(num);
       //create new node

      }
      //Case 2: Insert at the end
      elseif (index == length){
        ListNode *it = this->head;
        while(it->next != nullptr){       //while the next node is not the tail
            it = it->next;                //iterate it down the list until
        }                                 //the next node becomes the tail.
        it->next = new ListNode(num);     //create a node and make "it" point to node
      }
      //Case 3: Insert at some index in between

  }
}

//Remove
void List::remove(int index)
  //Guard to check if index is valid
  //Case 1: Remove at beginning
  //Case 2: Remove anywhere else

//get
void List::int get(int index) const


std::size_t size() const {returns length;}

//Overloaded operator
List::int& operator[](int index)
