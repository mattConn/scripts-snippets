//friend definitions
//==================
 
// istream
istream & operator>>(istream & in, AddressItem & a)
{
	in >> a.address;
	return in;
}

// usage
AddressItem a;
cin >> a;

// ostream
ostream & operator<<(ostream & out, const AddressItem & a)
{
	    out << a.address;
	        return out;
}

// usage
AddressItem a;
cout >> a;
