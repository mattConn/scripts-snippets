// Include gulp
var gulp = require('gulp');

// Include Our Plugins
var sass = require('gulp-sass');
var jade = require('gulp-jade');
var concat = require('gulp-concat');
var uglify = require('gulp-uglify');
var include = require('gulp-include');

// Compile Our Sass
gulp.task('sass', function() {
    return gulp.src('src/scss/*.scss')
        .pipe(sass())
        .pipe(gulp.dest('dist/css'));
});

// Concatenate & Minify JS
gulp.task('scripts', function() {
    return gulp.src(['src/js/vendor/*.js', 'src/js/*.js', '!src/js/_*.js'])
        .pipe(include())
        .pipe(concat('main.js'))
        .pipe(uglify())
        .pipe(gulp.dest('dist/js'));
});

// jade
gulp.task('jade', function(){
    return gulp.src(['src/jade/*.jade','!src/jade/_*.jade'])
        .pipe(jade({
            pretty: true
        }))
        .pipe(gulp.dest('dist/html'));
});

// Watch Files For Changes
gulp.task('watch', function() {
    gulp.watch('src/js/*.js', ['scripts']);
    gulp.watch('src/scss/*.scss', ['sass']);
    gulp.watch('src/jade/*.jade', ['jade']);
});

// Default Task
gulp.task('default', ['jade', 'sass', 'scripts', 'watch']);