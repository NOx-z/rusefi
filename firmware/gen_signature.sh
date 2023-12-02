#!/bin/bash

# file gen_signature.sh

SHORT_BOARDNAME=$1


SIGNATURE_FILE_NAME=tunerstudio/generated/signature_${SHORT_BOARDNAME}.txt
echo "Generating signature for ${SHORT_BOARDNAME}"

# generate a unique signature
date=`TZ=Europe/London date +"%Y.%m.%d"`
echo "! Generated by gen_signature.sh" > ${SIGNATURE_FILE_NAME}

echo "! SIGNATURE_HASH is a built-in variable generated by config_definition.jar" >> ${SIGNATURE_FILE_NAME}

# read the current git branch name
branchname=`git branch --show-current`
if [ "${branchname}" = "" ]; then
 # custom board, empty value while executed within submodule
 branchname="default"
 echo "! Using default branch $branchname" >> ${SIGNATURE_FILE_NAME}
else
 echo "! Current branch is: $branchname" >> ${SIGNATURE_FILE_NAME}
fi

echo "#define TS_SIGNATURE \"rusEFI $branchname.$date.${SHORT_BOARDNAME}.@@SIGNATURE_HASH@@\"" >> ${SIGNATURE_FILE_NAME}

exit 0
