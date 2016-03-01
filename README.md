# Tic Tac Toe Web Service Noughts and Crosses Game II

## Preface

Based on the examples, was built a new Web Service Tic Tac Toe (noughts and crosses).


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
./ttt_client Localhost
```

> Launches client to play on server registered on the machine itself (localhost)
