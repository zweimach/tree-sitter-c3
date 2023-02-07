module package::basic;
// <- keyword
//      ^ [variable namespace]
//            ^ punctuation.delimiter
//               ^ [variable namespace]
//                   ^ punctuation.delimiter

import std::io;
// <- include
//      ^ [variable namespace]
//        ^ punctuation.delimiter
//          ^ [variable namespace]
//            ^ punctuation.delimiter

fn void! main(int argc, char** argv) {
// <- keyword
//  ^ type
//     ^ operator
//        ^ [variable function]
//           ^ punctuation.bracket
//             ^ type
//                 ^ variable
//                    ^ punctuation.delimiter
//                       ^ type
//                          ^ operator
//                           ^ operator
//                               ^ variable
//                                 ^ punctuation.bracket
//                                   ^ punctuation.bracket
    io::printf("Hello, World!\n");
    // <- [variable namespace]
    // ^ punctuation.delimiter
    //   ^ [variable function]
    //        ^ punctuation.bracket
    //            ^ string
    //                       ^ string.escape
    //                          ^ punctuation.bracket
    //                           ^ punctuation.delimiter
}
// <- punctuation.bracket

fn int square(int x, int y) {
// <- keyword
//  ^ type
//      ^ [variable function]
//           ^ punctuation.bracket
//             ^ type
//                ^ variable
//                 ^ punctuation.delimiter
//                    ^ type
//                       ^ variable
//                        ^ punctuation.bracket
//                          ^ punctuation.bracket
    int s = x * y;
    // <- type
    //  ^ variable
    //    ^ operator
    //      ^ variable
    //          ^ variable
    //           ^ punctuation.delimiter
    return s;
    // <- keyword.return
    //     ^ variable
    //      ^ punctuation.delimiter
}
// <- punctuation.bracket
