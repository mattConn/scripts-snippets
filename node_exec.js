const execSync = require('child_process').execSync;

function exec(cmd_str) {
    return execSync(cmd_str).toString();
}
