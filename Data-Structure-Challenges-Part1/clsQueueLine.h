#pragma once
#include <iostream>
#include<string>
#include "clsMyQueue.h"
#include "queue"
#include "stack"
#include "clsUtil.h"

using namespace std;

class clsQueueLine
{
private:

	struct TicketInfo
	{
		string Prefix;
		string IssueTime;
		int WaitingClients;
		int ServeTime;
	};

	string _Prefix = "";
	int _ExpectedWaitingTime = 0;
	int _NumberOfTickets = 0;
	int _ServedClients = 0;
	queue<TicketInfo> _Line;
	



public:
	clsQueueLine(string Prefix, int ExpectedWaitingTime){

		_Prefix = Prefix;
		int _NumberOfTickets = 0;
		_ExpectedWaitingTime = ExpectedWaitingTime;
	
	};


	void IssueTicket(){

		TicketInfo New_Client;

		New_Client.Prefix = _Prefix + to_string(_Line.size() + 1);
		New_Client.IssueTime = clsUtil::GetSystemDateTimeString();
		New_Client.WaitingClients = _Line.size();
		New_Client.ServeTime = _Line.size() * _ExpectedWaitingTime;

		_Line.push(New_Client);
		_NumberOfTickets++;
		
     }

	void PrintInfo() {

		cout << "\n\t\t\t _________________________\n";
		cout << "\n\t\t\t\tQueue Info";
		cout << "\n\t\t\t _________________________\n";

		cout << "\n\t\t\t Prefix   : " << _Prefix;
		cout << "\n\t\t\t Total Tickets    : " << _NumberOfTickets;
		cout << "\n\t\t\t Served Clients  : " << _ServedClients;
		cout << "\n\t\t\t Waiting Tickets       : " << _Line.size();
		cout << "\n\t\t\t ___________________\n";
		cout << "\n";

	}

	void PrintTicketsLineRTL(){

		if (_Line.empty())
			cout << "\n\t\tTickets: No Tickets.";
		else
			cout << "\n\t\tTickets: ";

		queue <TicketInfo> TempQueueLine = _Line;


		while (!TempQueueLine.empty())
		{
			TicketInfo Ticket = TempQueueLine.front();

			cout << " " << Ticket.Prefix << " <-- ";

			TempQueueLine.pop();
		}

		cout << "\n";

	}

	void PrintTicketsLineLTR(){

		if (_Line.empty())
			cout << "\n\t\tTickets: No Tickets.";
		else
			cout << "\n\t\tTickets: ";

		queue <TicketInfo> TempQueueLine = _Line;
		stack <TicketInfo> TempStackLine;

		while (!TempQueueLine.empty())
		{
			TempStackLine.push(TempQueueLine.front());
			TempQueueLine.pop();
		}

		while (!TempStackLine.empty())
		{
			TicketInfo Ticket = TempStackLine.top();

			cout << " " << Ticket.Prefix << " --> ";

			TempStackLine.pop();
		}
		cout << "\n";
	}

	void PrintTicket(TicketInfo Ticket){

		cout << "\n\n\t\t\t____________________________________";
		cout << "\nt\t\t\t\t" << Ticket.Prefix;
		cout << "\n\n\t\t\t" << Ticket.IssueTime;
		cout << "\n\t\t\tWaiting Clients : " << Ticket.WaitingClients;
		cout << "\n\t\t\tServe Time In : " << Ticket.ServeTime << " minutes\n" ;
		cout << "\n\t\t\t____________________________________\n";

	}

	void PrintAllTickets()
	{

		cout << "\n\n\t\t\t       ---Tickets---";

		if (_Line.empty())
			cout << "\n\n\t\t\t     ---No Tickets---\n";

		queue <TicketInfo> TempQueueLine = _Line;


		while (!TempQueueLine.empty())
		{
			PrintTicket(TempQueueLine.front());
			TempQueueLine.pop();
		}

	}

	void ServeNextClient() {

		_ServedClients++;
		_Line.pop();
	}

};



