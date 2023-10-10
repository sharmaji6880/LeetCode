var mostCommonWord = function(paragraph, banned) {
    const symbols=["!","?","'",",",";","."," "];
    let start,end;
    for(let i=0;i<paragraph.length;i++) {
        if(symbols.includes(paragraph[i])) {
            continue;
        }else {
            start=i;
            break;
        }
    }
    for(let i=paragraph.length-1;i>=0;i--) {
        if(symbols.includes(paragraph[i])) {
            continue;
        }else {
            end=i;
            break;
        }
    }
    paragraph=paragraph.substring(start,end+1);

    const regex = /[!?,'. ]+/;
    const array = paragraph.split(regex);

    

    
    for(let i=0;i<array.length;i++) {
        let word = array[i];
        if(symbols.includes(word[word.length-1])) {
            array[i]=word.substr(0,word.length-1);
        }
    }
    
    for(x in array) {
        array[x]=array[x].toLowerCase();
    }
    
    const count={};
    for(i in array) {
        if(banned.includes(array[i])) {
            continue;
        }
        if(count[array[i]] === undefined) {
            count[array[i]]=1;
        }else {
            count[array[i]]++;
        }
        
    }
    let Max=0,word="";
    for(x in count) {
        if(count[x]>Max) {
            Max=count[x];
            word=x;
        }
    }
    return word;
    

};
