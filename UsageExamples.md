# Introduction #

This page should help you get understand tsunmix usage. Prompt commands filled starts with _$:_ and examples expect tsunmix binary and global mix database.dat to be placed in current directory.


# Examples #

## Basic list of files ##

```
$: ./tsunmix TIBSUN.MIX
```
```
       ID |    ADDRESS |      SIZE
 90719a84 |   61424300 |    6028236
 92144015 |   73049180 |       7746
 a226651e |   56104508 |    2087806
 a74702a9 |   58200156 |    3224136
 a8548fd9 |   22111980 |   18044736
 bccc4d97 |   13494332 |    8617646
 d71ebcfd |   58192316 |       7826
 d7d1e054 |   67452540 |    5596628
 dd991d13 |   40156716 |     998476
 0f5d1d99 |    5869580 |    7624750
 330a4adf |   42195196 |    6935164
 3b5a96de |        300 |     169176
 55de03cc |     169484 |    5700088
 5aa5b016 |   73056940 |    2037606
 5b0d6fbd |   41155196 |    1039996
 74aa300f |   49130364 |    6974140
 763c81dd |   75094556 |        151
```

## List of files (with file names) ##
```
$: ./tsunmix TIBSUN.MIX list
```
```
                         FILENAME |       ID |    ADDRESS |      SIZE
                     speech01.mix | 90719a84 |   61424300 |    6028236
                          tem.mix | 92144015 |   73049180 |       7746
                         snow.mix | a226651e |   56104508 |    2087806
                       sounds.mix | a74702a9 |   58200156 |    3224136
                        local.mix | a8548fd9 |   22111980 |   18044736
                      isotemp.mix | bccc4d97 |   13494332 |    8617646
                          sno.mix | d71ebcfd |   58192316 |       7826
                     speech02.mix | d7d1e054 |   67452540 |    5596628
                      sidec01.mix | dd991d13 |   40156716 |     998476
                      isosnow.mix | 0f5d1d99 |    5869580 |    7624750
                     sidenc01.mix | 330a4adf |   42195196 |    6935164
                        cache.mix | 3b5a96de |        300 |     169176
                      conquer.mix | 55de03cc |     169484 |    5700088
                     temperat.mix | 5aa5b016 |   73056940 |    2037606
                      sidec02.mix | 5b0d6fbd |   41155196 |    1039996
                     sidenc02.mix | 74aa300f |   49130364 |    6974140
                          key.ini | 763c81dd |   75094556 |        151
```

## CRC id of a file ##
### Archive contains the file ###
```
$: ./tsunmix TIBSUN.MIX getid tem.mix
```
```
tem.mix : 92144015
```

### File is not present in the archive ###
```
$: ./tsunmix TIBSUN.MIX getid not_existing_file
```
```
not_existing_file : e008f209 (NOT PRESENT)
```

## Extract everything ##
### Normal extraction ###
```
$: ./tsunmix TIBSUN.MIX all -o test
```

```
$: ls test

cache.mix  conquer.mix  isosnow.mix  isotemp.mix  key.ini  local.mix  sidec01.mix  sidec02.mix  sidenc01.mix  sidenc02.mix  sno.mix  snow.mix  sounds.mix  speech01.mix  speech02.mix  tem.mix  temperat.mix
```

### Fast Extraction ###
```
$: ./tsunmix TIBSUN.MIX all -o test -f
```

```
$: ls test

unknown_a226651e  unknown_a8548fd9  unknown_dd991d13  unknown_d71ebcfd  unknown_3b5a96de  unknown_5aa5b016  unknown_55de03cc  unknown_763c81dd  unknown_92144015
unknown_a74702a9  unknown_bccc4d97  unknown_d7d1e054  unknown_f5d1d99   unknown_330a4adf  unknown_5b0d6fbd  unknown_74aa300f  unknown_90719a84
```

## Extract a specific file(s) ##
```
$: ./tsunmix TIBSUN.MIX extract key.ini -o test/key.ini cache.mix -o test/cache.mix
```

```
$: ls test

cache.mix  key.ini
```

**Note:** Option **-o <output file>** is optional. Without setting output file, the original filename is used.

User is warned if file is not found in the archive.

### Examples with ID instead of filename ###
Sometimes filenames can be unknown, but might know CRC ID.

#### Using decimal ID ####
```
$: ./tsunmix TIBSUN.MIX extid 111222

File "111222" not found in the archive.
```

#### Using hexadecimal ID ####
```
./tsunmix TIBSUN.MIX extid 0x763c81dd
```

**Note:** extid works in same way as the extract function. That means you can use -o option to specify output file and also extract more files at once.