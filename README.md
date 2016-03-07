# Tic Tac Toe Sun RPC Noughts and Crosses Game II

<img src="assets/2000px-Tic_tac_toe.png" alt="Tic Tac Toe" align="center" width="50%"/>

## Preface

Based on the examples, was built a new Sun RPC Tic Tac Toe (noughts and crosses).

[Chapter on SUN RPC the 2nd Edition of the book "Distributed Systems: Concepts and Design"](http://www.cdk4.net/wo/additional/rmi/Ed2/SunRPC.pdf)

[Source](http://disciplinas.tecnico.ulisboa.pt/leic-sod/2015-2016/labs/03-rpc/index.html) (PT)

### Starting

Run on the console:

```
rpcgen ttt.x
````

> So that the SUS PRC manages various support files to the distributed application.

Then run:

```
rpcgen -Sc ttt.x> ttt_client.c
```

> To generate an instance of a client. (There is also the option to generate a -Ss server example)

Launch the server remotely and try to play through the built client.

To do this, run the console:

```
./ttt_server &
```

> Launches server in background - background

```
./ttt_client localhost
```

> Launches client to play on server registered on the machine itself (localhost)

===================================================

Distributed Systems Group 35
-------------------

Daniel da Costa

69720

daniel.da.costa@tecnico.ulisboa.pt

-------------------

Filipe Fernandes

73253

filipe.duarte.fernandes@tecnico.ulisboa.pt

-------------------

Francisco Maria Calisto

70916

francisco.calisto@tecnico.ulisboa.pt

-------------------
