/*
 * singleton.hpp
 *
 *  Created on: 13 déc. 2018
 *      Author: chapoul
 */

#ifndef SINGLETON_HPP_
#define SINGLETON_HPP_

#include<iostream>
using namespace std;



class Object {

	public:

		Object(){};

		~Object(){};

		void test(){

			cout<<"test"<<endl;

		}
};




class Singleton : public Object {

	public:

		~Singleton(){};

		static Singleton * Instance(){

			if (instance != 0 ){

				cout<<" creation impossible, instance alreday exist"<<endl;

			}
			else{

				instance = new Singleton;

				cout<<"instance created"<<endl;

			}

			return instance;
		};


	protected:


	private:

		Singleton(){instance = 0;};

		static Singleton * instance ;





};

Singleton * Singleton::instance =0;

#endif /* SINGLETON_HPP_ */
