class Solution:
    def __init__(self):
        self.lengths = []

    def encode(self, strs: List[str]) -> str:
        encoded = ""
        self.lengths = []
        for i in strs:
            encoded += i
            self.lengths.append(len(i))
        return encoded

    def decode(self, s: str) -> List[str]:
        lengths = self.lengths
        decoded = []
        for i in lengths:
            subs = s[0 : i]
            decoded.append(subs)
            s = s[i:] 
        
        return decoded
