#include <iostream>
using namespace std;

int main() {
    int choice;

    do {
        cout << "\n====================================";
        cout << "\n DHCP, DNS, WEB SERVER AND EMAIL";
        cout << "\n====================================";
        cout << "\n1. DHCP Configuration";
        cout << "\n2. DNS Configuration";
        cout << "\n3. Web Server Configuration";
        cout << "\n4. Email Configuration";
        cout << "\n5. Ping Connectivity Test";
        cout << "\n6. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "\n--- DHCP Configuration ---\n";
                cout << "Discover: Client searches for DHCP server.\n";
                cout << "Offer: Server offers an IP address.\n";
                cout << "Request: Client requests the offered IP.\n";
                cout << "Acknowledge: Server assigns the IP address.\n";
                cout << "DHCP IP assignment completed successfully!\n";
                break;

            case 2:
                cout << "\n--- DNS Configuration ---\n";
                cout << "Domain Name: www.example.com\n";
                cout << "IP Address: 192.168.1.10\n";
                cout << "DNS resolves the domain name to an IP address.\n";
                break;

            case 3:
                cout << "\n--- Web Server Configuration ---\n";
                cout << "Web Server IP: 192.168.1.10\n";
                cout << "Protocol: HTTP\n";
                cout << "Port Number: 80\n";
                cout << "Website: http://www.example.com\n";
                cout << "Web page accessed successfully!\n";
                break;

            case 4:
                cout << "\n--- Email Configuration ---\n";
                cout << "SMTP Port: 25 (Email Sending)\n";
                cout << "POP3 Port: 110 (Email Receiving)\n";
                cout << "IMAP Port: 143 (Email Synchronization)\n";
                cout << "Email sent and received successfully!\n";
                break;

            case 5:
                cout << "\n--- Ping Connectivity Test ---\n";
                cout << "Source IP: 192.168.1.2\n";
                cout << "Destination IP: 192.168.1.10\n";
                cout << "Reply received from destination.\n";
                cout << "Packets sent: 4\n";
                cout << "Packets received: 4\n";
                cout << "Connectivity test successful!\n";
                break;

            case 6:
                cout << "\nExiting the program...\n";
                break;

            default:
                cout << "\nInvalid choice! Please try again.\n";
        }

    } while (choice != 6);

    return 0;
}
