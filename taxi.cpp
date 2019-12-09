    #include <bits/stdc++.h>
    #include<math.h>

    using namespace std;

    int main()
    {
        int n,i,j=0,k,l,sum=0,tax=0,tax1=0,tax2=0,p=0,one=0,two=0,three=0,four=0;
        double q,r;
        cin>>n;
        int a[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }


        for (int i = 0; i < n; i++)                     //Loop for descending ordering
    	{
    		for (int j = 0; j < n; j++)             //Loop for comparing other values
    		{
    			if (a[j] < a[i])                //Comparing other array elements
    			{
    				int tmp = a[i];         //Using temporary variable for storing last value
    				a[i] = a[j];            //replacing value
    				a[j] = tmp;             //storing last value
    			}
    		}
    	}


        for(i=0;i<n;i++)
        {
            if(a[i]==3)
            {
                for(j=i;j<n;j++)
                    {
                        if(a[j]==1)
                            {
                                a[i]=0;
                                a[j]=0;
                                tax1++;
                                break;
                            }
                    }
            }
        }
LOOP: for(i=0;i<n;i++)
        {
            if(a[i]==2)
            {
                for(j=i+1;j<n;j++)
                    {
                        if(a[j]==1)
                        {
                            for(k=j+1;k<n;k++)
                                {
                                    if(a[k]==1)
                                        {
                                            a[k]=0;
                                            a[i]=0;
                                            a[j]=0;
                                            tax2++;
                                            //cout<<tax2;
                                            //cout<<tax2;
                                            //goto LOOP;
                                         break;

                                        }

                                }
break;

                        }

                    }

            }

        }



        for(i=0;i<n;i++)
        {
            if(a[i]==1){one++;}
            else if (a[i]==2){two++;}
            else if (a[i]==3){three++;}
            else if (a[i]==4){four++;}

        }


    //cout<<one<<two<<three<<four<<tax1<<tax2<<endl;

    if(two==1 && one ==1){cout<<"1"<<endl;}

    if(two>=2){q=ceil(two/2);two=q;}

    else
         {
            r=one;
            one=ceil(r/4);

            //cout<<four<<tax1<<tax2<<one<<two<<three<<endl;
            cout<<four+tax1+tax2+one+two+three<<endl;
    }
}
