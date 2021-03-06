function Blockchain()
{
    this.chain = [ ];
    this.pendingTransactions = [ ];
    
}

Blockchain.prototype.createNewBlock = function(nonce, prevBlockHash, hash)
{
    const newBlock = 
    {
        index: this.chain.length + 1, 
        timestamp: Date.now(),
        transactions: this.pendingTransactions,
        nonce: nonce, 
        prevBlockHash: prevBlockHash,
        hash: hash,
    };

    this.pendingTransactions = [ ];
    this.chain.push(newBlock);

    return newBlock;
} 

Blockchain.prototype.getLastBlock = function() 
{
    return this.chain[this.chain.length - 1];
}

Blockchain.prototype.createNewTransaction = function(amount, sender, recipient)
{
    const newTransaction = 
    {
        amount: amount,
        sender: sender,
        recipient: recipient
    };

    this.pendingTransactions.push(newTransaction);

    return this.getLastBlock( )['index'] +1;
}

module.exports = Blockchain;
