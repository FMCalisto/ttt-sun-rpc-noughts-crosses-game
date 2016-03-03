# Tic Tac Toe Web Service Noughts and Crosses Game II

<img src="assets/2000px-Tic_tac_toe.png" alt="Tic Tac Toe" align="center" width="50%"/>

## Preface

Based on the examples, was built a new Web Service Tic Tac Toe (noughts and crosses).

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

## Authors

### Group 35

<table style="width:100%">
  <tr>
    <th>Picture</th>
    <th>Number</th>
    <th>GitHub</th>		
    <th>Name</th>
    <th>E-Mail</th>
  </tr>
  <tr>
    <td align="center">
      <img
        src="https://avatars3.githubusercontent.com/u/7997092?v=3&s=100"
        alt="Daniel da Costa"
      >
    </td>
    <td align="center">ist169720</td>
    <td align="center"><a href="https://github.com/atsoket">atsoket</a></td>		
    <td align="center">Daniel da Costa</td>
    <td align="center"><a href="mailto:daniel.da.costa@tecnico.ulisboa.pt">daniel.da.costa</a></td>
  </tr>
  <tr>
    <td align="center">
      <img
        src="https://avatars0.githubusercontent.com/u/11545541?v=3&s=100"
        alt="Filipe Fernandes"
      >
    </td>
    <td align="center">ist173253</td>
    <td align="center"><a href="https://github.com/filipefernandes93">filipefernandes93</a></td>		
    <td align="center">Filipe Fernandes</td>
    <td align="center"><a href="mailto:filipe.duarte.fernandes@tecnico.ulisboa.pt">filipe.duarte.fernandes</td>
  </tr>
  <tr>
    <td align="center">
      <img
        src="https://avatars2.githubusercontent.com/u/1298239?v=3&s=100"
        alt="Francisco Maria Calisto"
      >
    </td>
    <td align="center">ist170917</td>
    <td align="center"><a href="https://github.com/FMCalisto">FMCalisto</a></td>		
    <td align="center">Francisco Maria Calisto</td>
    <td align="center"><a href="mailto:francisco.calisto@tecnico.ulisboa.pt">francisco.calisto</a></td>
  </tr>
</table>
