package com.leetcode.questions.leetcode.editor.en;

import java.util.*;

public class SortSummary {
    /**
     * Sort the Summary finds the frequency of times that element pops up from elements in an array. sort them descending but if frequency is the same sort them ascending for that case
     * <pre>
     * <ul>
     *     <li>array has odd cardinality - does not matter. going through entire list to check # of times element pops up</li>
     *     <li>array is even cardinality - does not matter. going through entire list to check # of times element pops up</li>
     *</ul>
     * </pre>
     * return list of list of integers.
     */


    public List<List<Integer>> groupSort(List<Integer> inputArray) {
        if (inputArray.isEmpty()) throw new RuntimeException("not big enough");
        if (inputArray.size() == 1) return new ArrayList<>((List) new ArrayList<>(Arrays.asList(inputArray.get(0),1)));


        Map<Integer, Integer> map = new HashMap<>();

        for(Integer element : inputArray){
            Integer prevValue = !map.containsKey(element)? map.put(element, 1):
            map.put(element, map.get(element)+1);
        }


        List<List<Integer>> result  = new ArrayList<>();
        for(HashMap.Entry<Integer, Integer> entry: map.entrySet()){
            result.add(Arrays.asList(entry.getKey(), entry.getValue()));
        }
        result.sort((a, b) -> {
            int freqA = a.get(1);
            int freqB = b.get(1);
            int distinctA = a.get(0);
            int distinctB = b.get(0);
            if(freqA > freqB){
                return -1;
            }
            else if(freqA < freqB){
                return 1;
            }
            else//equals the same
            {
                if(distinctA > distinctB) return 1;
                else if( distinctA < distinctB) return -1;
                return 0;
            }
        });

        return result;
    }

}
