#include<iostream>
using namespace std;

int main() {
int firstOctet;

cout << "Enter First Octet of IP Address: ";
cin >> firstOctet;

if(firstOctet < 0 || firstOctet > 255) {
cout << "Invalid IP Address!";
}
else if(firstOctet >= 1 && firstOctet <= 126) {
cout << "Class A IP Address\n";
cout << "Address Range: 1.0.0.0 to 126.255.255.255\n";
cout << "Default Subnet Mask: 255.0.0.0 \n";
cout << "Number of Networks: 126\n";
cout << "Number of Hosts per Network: 16,777,214\n";
cout << "Reason: 2^24 - 2 = 16,777,214 usable hosts.\n";
cout << "-2 because one address is reserved for the Network Address\n";
cout << "and one address is reserved for the Broadcast Address.\n";
}
else if(firstOctet == 127) {
cout << "Loopback Address\n";
cout << "Address Range: 127.0.0.0 to 127.255.255.255\n";
cout << "Loopback Address is a special IP address reserved for testing and diagnosing a computer's network software.\n";
cout << "The address 127.0.0.1 (localhost) allows a computer to communicate with itself.\n";
cout << "Subnet Mask: Not Applicable\n";
}
else if(firstOctet >= 128 && firstOctet <= 191) {
cout << "Class B IP Address\n";
cout << "Address Range: 128.0.0.0 to 191.255.255.255\n";
cout << "Default Subnet Mask: 255.255.0.0 \n";
cout << "Number of Networks: 16,384\n";
cout << "Number of Hosts per Network: 65,534\n";
cout << "Reason: 2^16 - 2 = 65,534 usable hosts.\n";
cout << "-2 because one address is reserved for the Network Address\n";
cout << "and one address is reserved for the Broadcast Address.\n";
}
else if(firstOctet >= 192 && firstOctet <= 223) {
cout << "Class C IP Address\n";
cout << "Address Range: 192.0.0.0 to 223.255.255.255\n";
cout << "Default Subnet Mask: 255.255.255.0 \n";
cout << "Number of Networks: 2,097,152\n";
cout << "Number of Hosts per Network: 254\n";
cout << "Reason: 2^8 - 2 = 254 usable hosts.\n";
cout << "-2 because one address is reserved for the Network Address\n";
cout << "and one address is reserved for the Broadcast Address.\n";
}
else if(firstOctet >= 224 && firstOctet <= 239) {
cout << "Class D IP Address (Multicast)\n";
cout << "Address Range: 224.0.0.0 to 239.255.255.255\n";
cout << "Subnet Mask: Not Applicable\n";
}
else if(firstOctet >= 240 && firstOctet <= 255) {
cout << "Class E IP Address (Experimental)\n";
cout << "Address Range: 240.0.0.0 to 255.255.255.255\n";
cout << "Subnet Mask: Not Applicable\n";
}
else {
cout << "Invalid IP Address!";
}

return 0;
}
