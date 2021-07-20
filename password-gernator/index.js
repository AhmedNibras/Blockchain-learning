
const program = require('commander')
const chalk = require('chalk')
const clipboardy = require('clipboardy')
const log = console.log
const createPassword = require('./utils/createPassword')
const savePassword = require('./utils/savePassword')


program.version('1.0.0').description('Simple Password Generator').

program
.option('-l, --length <number>', 'lenght of password', '8')
.option('-s, --save', 'save password to passwords.txt')
.option('-nn, --no-numbers', 'remove numbers')
.option('-ns, --no-symbols', 'remove symbols')
.parse()

const { length, save, numbers, symbols } = program.opts()

// Get generated password 
const generatedpassword = createPassword(length, numbers, symbols)

// Save to filename
if(save) {
    savePassword(generatedpassword)
}

// Copy to clipboard
clipboardy.writeSync(generatedpassword)

// Output Generated Passwords
log(chalk.blue('Generated Password: ') + chalk.bold(generatedpassword) )

log(chalk.yellow('Password copied to clipboard '))