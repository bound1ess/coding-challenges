# Coding challenges

## Finding loops in a linked list

Source code (`Ruby`): `src/linked-list/node.rb`.

## Printing a 2D array in spiral order (spiral order traversal)

Source code (`C++`): `src/spiral-order/main.cpp`.

## Hashtag/URL segmentation

Original idea: [HackerRank](https://www.hackerrank.com/challenges/url-hashtag-segmentation).

I/O:

| Input | Output |
--------|---------
| 3 | |
| #isittime | is it time |
| www.whatismyname.com | what is my name |
| #letusgo | let us go |

## Pathfinding

Original idea: [HackerRank](https://www.hackerrank.com/challenges/saveprincess).

* Princess and bot's positions are randomly set.
* Instead of printing out *moves*, print a new grid with the rescue path outlined.
* When invalid data is supplied, print "Inapplicable" and exit.
* I took not the best, but a very straightforward approach.

I/O:

| Input | Output |
--------|---------
| 3     |        |
| p-b   | p#b    |
| ---   | ---    |
| ---   | ---    |

| Input | Output |
--------|--------|
| 3     |        |
| pb-   | pb-    |
| ---   | ---    |
| ---   | ---    |

| Input | Output |
--------|--------|
| 3     |        |
| p--   | p##    |
| ---   | --#    |
| --b   | --b    |

| Input | Output |
--------|--------|
| 3     |        |
| -b-   | -b-    |
| ---   | -#-    |
| -p-   | -p-    |

| Input | Output |
--------|--------|
| 3     |        |
| ---   | ---    |
| p--   | p##    |
| --b   | --b    |
