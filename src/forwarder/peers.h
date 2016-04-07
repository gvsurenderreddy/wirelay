#ifndef __PEERS_H__
#define __PEERS_H__

#define PEERS_TABLE_SIZE 100

struct peer_entry {
    uint16_t    fd; 
    uint8_t     proto;
    sock_addrin dst_ip;
    uint16_t    dst_port;
	uint8_t 	active;
};

struct peer_entry[PEERS_TABLE_SIZE] peersTable;


// list of peersTable methods
int peers_addPeer ();
int peers_delPeer ();
int peers_reset ();

#endif
