//Kristofer Fajardo Project 3
#include<iostream>
#include<cstdlib>

using namespace std;

struct student

{
int id;
char name[50],addr[100];
double gpa;
};
student st[100];

struct student_list

{
int id;
char name[50],addr[100];
double gpa;
student_list *next;
};

struct student_list *head=NULL,*last=NULL;

//function to store student records into student array;

void add_student_array(int count)

{
    for(int i=0;i<count;i++)

    {
        cout<<"Enter student #"<<i+1<<"'s details: "<<endl;

        cout<<" ID: ";
        cin>>st[i].id;

        cout<<" Name: ";
        cin>>st[i].name;

        cout<<" Address: ";
        cin>>st[i].addr;

        cout<<" GPA: ";
        cin>>st[i].gpa;
    }
}

//function to print student records from student array;

void display_student_array(int count)

{

    cout<<endl<<"Displaying student details from array:"<<endl;

    for(int i=0;i<count;i++)

    {
        cout<<endl<<"Student #"<<i+1<<"'s details: "<<endl;
        cout<<" ID: "<<st[i].id<<endl;
        cout<<" Name: "<<st[i].name<<endl;
        cout<<" Address: "<<st[i].addr<<endl;
        cout<<" GPA: "<<st[i].gpa<<endl;
    }
}

//function to add to student list

void add_student_list(int count)

{

    for(int i=0;i<count;i++)

    {

        struct student_list* node=(struct student_list*)malloc(sizeof(struct student_list));

        cout<<"Enter student #"<<i+1<<"'s details: "<<endl;

        cout<<" ID: ";
        cin>>node->id;

        cout<<" Name: ";
        cin>>node->name;

        cout<<" Address: ";
        cin>>node->addr;

        cout<<" GPA: ";
        cin>>node->gpa;

        node->next=NULL;

        if(i==0)
        {
            head=node;
            last=node;
        }

        else
        {
            last->next=node;
            last=node;
        }

    }

}

//function to print student list

void display_student_list()

{

    struct student_list* node=head;

    cout<<endl<<"Displaying student details from list:";

    int i=1;

    while(node!=NULL)

    {
        cout<<endl<<"Student #"<<i<<"'s details: "<<endl;
        cout<<" Id:"<<node->id<<endl;
        cout<<" Name:"<<node->name<<endl;
        cout<<" Address:"<<node->addr<<endl;
        cout<<" GPA:"<<node->gpa<<endl;

        node=node->next;
        i++;
    }
}

//main driver function

int main()

{

int count=15;

cout<<"Enter information to insert into student array: "<<endl;

add_student_array(count);
display_student_array(count);


}
