-module(test).

-author(japlee).

-compile(export_all).

print() ->
  io:format("Hello, git!~n").

add(x, y) is_number(x), is_number(y) ->
  x + y.
  
list_sum(List) ->
  list_sum_help(List, 0).

list_sum_help([], Sum) ->
  Sum;
list_sum_help([H|T], Sum) is_number(H) ->
  list_sum_help(T, Sum + H).
