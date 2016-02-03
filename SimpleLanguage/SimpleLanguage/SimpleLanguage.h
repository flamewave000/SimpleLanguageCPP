#pragma once
#ifndef _SIMPLELANGUAGE_H
#define _SIMPLELANGUAGE_H
#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
#include <stack>
#include <queue>
#include <deque>
#include <tuple>
#include <fstream>
#include <memory>


#define variable auto
#define and &&
#define or ||
#define not !
#define is_negative < 0
#define is_positive >= 0
#define is_odd & 0x01
#define is_equal_to ==
#define is_bigger_than >
#define is_smaller_than <
#define yes true
#define no false
#define if if
#define check_if if
#define otherwise else
#define repeat_this while(1) {
#define repeat_if(condition) while(condition) {
#define stop_repeating break
#define go_back_to_beginning continue
#define in :
#define for for
#define for_each(statement) for(variable statement)

#define plus +
#define minus -
#define multiplied_by *
#define divided_by /

#define ignore(comment)
#define pause system("PAUSE")
#define clear_the_screen system("CLS")
#define success 0
#define failure 1
#define done_with return

#define then_say <<
#define say std::cout then_say
#define then_end_the_line then_say std::endl
#define then_get >>
#define get std::cin then_get

#define is =

#define list std::vector
#define dictionary std::unordered_map
#define list_of(type) list<##type>
#define dictionary_of(first_type, second_type) dictionary<##first_type, ##second_type>
#define part .
#define add_to_list part push_back
#define add_to_dictionary part insert
#define at part at
#define remove_at part remove

#define begin_with(argument_list_name) int _begin(std::vector<std::string> ##argument_list_name); int main(int ___argc, const char*___args[]) { std::vector<std::string> arguments; for (int c = 0; c < ___argc; c++) { arguments.push_back(___args[c]); }return _begin(arguments); }int _begin(std::vector<std::string> ##argument_list_name)

#define start {
#define from_here start
#define do start
#define end }
#define now_go_back end
#define package struct start
#define as end
#define null nullptr
#define create_a_new(type) std::make_shared<type>(new type())

#define a_repeatable_process [&]
#define that_uses (
#define and_produces_a ) ->

typedef char letter;
typedef int whole_number;
typedef __int64 large_whole_number;
typedef float fraction;
typedef double large_fraction;
typedef bool maybe;
typedef std::string text;

#endif // !_LANG_H

