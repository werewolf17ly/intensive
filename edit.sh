#!/bin/bash
read path
read line_to_change
read changing

if [[ -z "{$line_to_change}" ]] || [[ -z "{$changing}" ]]; then
echo "Error"
exit 1
fi
sed -i '' 's/'"$line_to_change"'/'"$changing"'/' $path

size=$(wc -c $path | awk '{print $1}')
date=$(date | awk '{print $2" "$3" "$4}')
shasum=$(shasum -a 256 "$path" | awk '{print $1}')
sha='sha256'
echo "$path - $size - $date - $shasum - $sha" >> files.log
