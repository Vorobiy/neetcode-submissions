class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        hm = defaultdict(list) #mapping character count of string to list of anagrams
        
        for s in strs:
            count = [0] * 26 #a .. z

            for c in s:
                count[ord(c) - ord("a")] += 1
            
            hm[tuple(count)].append(s)

        return list(hm.values())