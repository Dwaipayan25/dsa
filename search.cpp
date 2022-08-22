// Searching an element in a sorted array

int binsearch(int a[],int x){
	int low=0,high=n-1;
	while(low<=high){
		mid=(low+high)/2;
		if(a[mid]==x){
			return mid;
		}else if(a[mid]>x){
			high=--mid;
		}else{
			low=++mid;
		}
	}
	return -1;
}

// Count 1's in binary array

int cto(int a[],int n){
	
	if(a[0]==0)
		return 0;
	int low=0,high=n-1;
	while(low<=high){
		mid=(low+high)/2;
		if(a[mid]==1 && a[mid+1]==0){
			return mid+1;
		}
		else if(a[mid]==0){
			high=--mid;
		}else{
			low=++mid;
		}
	}
}

// Square root of a number 

int sqrrt(int n){
	int low=0,high=n;
	while(low<=high){
		int mid=(low+high)/2;
		if(mid*mid==n){
			return mid;
		}else if(mid*mid>n){
			high=--mid;
		}else{
			low=++mid;
		}
	}
	return mid;
}

// Majority Element 

int majele(int a[],int n){
	int res=a[0],ct=1;
	for(int i=1;i<n;i++){
		if(a[i]==res){
			ct++;
		}else{
			ct--;
		}
		if(ct==0){
			res=a[i];
			ct=1;
		}
	}
	int c=0;
	for(int i=0;i<n;i++){
		if(a[i]==res)
			c++;
	}
	if(c>n/2){
		return res;
	}else{
		return -1;
	}
}

//Left Index

int lmi(int a[],int n,int x){
	int l=0,h=n-1;
	while(l<=h){
		int m=(l+h)/2;
		if(a[m]==x ){
			if((a[m]==0 || a[m-1]!=x))
				return m;
			else if(a[m-1]==x)
				h=--m;
		}else if(a[m]>x){
			h=--m;
		}else{
			l=++m;
		}
	}
	return -1;
}

//peak element

int peak(int a[],int n){
	int l=0,h=n-1;
	while(l<=h){
		int m=(l+h)/2;
		if((m==0 || a[m]=>a[m+1])&&(m==n-1 ||a[m]<=a[m-1]))
			return m;
		else if(a[m+1]>a[m])
			l=++m;
		else
			h=--m;
	}
	return -1;
}

//Floor in a Sorted Array 
{1,2,8,10,11,12,19}
x=5
ans=1

int floorr(int a[],int n,int x){
	int l=0,h=n-1;
	while(l<=h){
		int m=(l+h)/2;
		if(a[m]<=x && a[m+1]>x)
			return m;
		else if(a[m]<=x && a[m+1]<=x)
			l=++m;
		else
			h=--m;
	}
	return -1;
}

//Minimum Number in a sorted rotated array
N = 10
arr[] = {2,3,4,5,6,7,8,9,10,1}
Output: 1


int minn(int a[]){
	int low=0,high=n-1;
	
	while(low<=high){
		int mid=(low+high)/2;
		if((mid==0 || a[mid]>a[mid-1])&&(mid==n-1 || a[mid]<a[mid+1] )){
			return mid;
		}else if(a[mid]<a[mid+1]){
			high=++mid;
		}else{
			low=--mid;
		}
	}
	
}

//COUNT ONLY REPEATED
N = 6
arr[] = {1,2,3,3,4,5}

int res=arr[0],ct=1,f=1;
vector<int>v;
for(int i=1;i<n;i++){
	if(arr[i]!=res){
		
		if(f==0){
			break;
			v.pb(ct);
		}
		ct=1;
	}
	else{
		v.pb(res);
		ct++;
		f=0;
	}
}
















