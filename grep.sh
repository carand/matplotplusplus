#!/usr/bin/env sh
CURDIR=$PWD
cd source || exit

# grep -Rn --exclude-dir={examples,docs,test,.git,cmake} --exclude={examples.md,index.md,README.md,mkdocs.yml,N} '11'¬                                                        │ 9     setYTicks(const std::vector<doubl│make}  '11'
# grep -Rn --exclude={world_map_10m.cpp} --exclude-dir={3rd_party} '11' || exit
grep -Rn --exclude-dir={3rd_party} 'title' || exit
cd "${CURDIR}" || exit
