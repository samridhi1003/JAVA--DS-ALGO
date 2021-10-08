// #include <iostream>
// using namespace std;
// struct list
// {
// 	int m;
// 	int n;
// 	int num;
// 	struct element *s;
	
	
// };

// struct element
// {
// 	int i;
// 	int j; 
// 	int k;
// 	struct element *next;
	
// };

// void create(struct list *p)
// { 
 
// 	int i;
// for(i=0;i<p->num;i++)
// { 


//    if(i==0)
//    {
  
//    	 cout<<"enter the row and column with data   ";
//    	 cin>>p->s->i>>p->s->j>>p->s->k;
   	 
//    	 p->s->next=NULL;
   	
   	 
//    	 cout<<"\n";
   	 	
//    	cout<<"\n";
//    }
// 	else 
// 	{ 
		
// 		struct element *t;
//     	t=new struct element;
//     	cout<<"enter the row and column with data   ";
//    	 cin>>t->i>>t->j>>t->k;
// 	    p->s->next=t;
// 		p->s=t;
// 		p->s->next=NULL;	
// 		cout<<"\n";
			
// 		cout<<"\n";
// 	}
	
	
// 	 }	 
	


	
	
	
	
// }


 

// void rdisplay(struct element *p,int m,int n)
// { struct element *q;
// q=p;
// 	int g,h;
// 	cout<<m<<n;
// 	cout<<"\n";
// 	 	while(p!=NULL)
// 	{
		
// 		cout<<p->i<<"  "<<p->j<<"  "<<p->k;
// 		cout<<"\n";
// 		p=p->next;
		
		
// 	}
// 	p=q;
// 	cout<<"\n";


// for(g=0;g<m;g++)
// { 
//     if(g==p->i)
//     {   
//          for(h=0;h<n;h++)
//          {
//          	if(h==p->j)
//          	{
//          		cout<<p->k;
//          		p=p->next;
         		
         		
// 			 }
//          	else
//          	cout<<"0";
         	
// 		 }
    	
	
// 	}
//    else
//    cout<<"0";	
	
	
// 	cout<<"\n";
	
// }
	
	
// }








// int main(int argc, char** argv) {
	
// struct list *first;
// 	first=new struct list;
// cout<<"enter the no. of rows";
// cin>>first->m;
// cout<<"\n";
// cout<<"enter the no. of columns";
// cin>>first->n;
// cout<<"\n";
// cout<<"enter the no. of elements";
// cin>>first->num;
// cout<<"\n";
//  struct element *k;

//     k=new struct element;
//      first->s=k;


// create(first);


// rdisplay(k,first->m,first->n);
// 	return 0;
// }

