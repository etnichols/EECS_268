/**
*	@file : Node.h
*	@author : Evan Nichols
*	@date : 2015.2.5
*	Purpose: Implementation of the Node Class. 
*/

#include <iostream>
#include <string>
#include <stdexcept>
#include "Node.h"

//CONSTRUCTOR
template <typename T>
Node<T>::Node(){

m_value = T();
m_below = nullptr;

}

//SET VALUE
template <typename T>
void Node<T>::setValue(T val) 
{m_value = val;}

//GET VALUE
template <typename T>
T Node<T>:: getValue() 
{return(m_value);}

//SET BELOW NODE POINTER
template <typename T>
void Node<T>::setBelow(Node<T>* below)
{ m_below = below; }

//GET BELOW NODE POINTER
template <typename T>
Node<T>* Node<T>::getBelow()
 {return(m_below);}
