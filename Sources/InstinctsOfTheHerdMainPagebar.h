//
//	InstinctsOfTheHerdMainPagebar.h
//	InstinctsOfTheHerd v2.7.1
//
//	Created by Julius Oklamcak on 2011-09-01.
//	Copyright © 2011-2013 Julius Oklamcak. All rights reserved.
//
//	Permission is hereby granted, free of charge, to any person obtaining a copy
//	of this software and associated documentation files (the "Software"), to deal
//	in the Software without restriction, including without limitation the rights to
//	use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies
//	of the Software, and to permit persons to whom the Software is furnished to
//	do so, subject to the following conditions:
//
//	The above copyright notice and this permission notice shall be included in all
//	copies or substantial portions of the Software.
//
//	THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
//	OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
//	FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
//	AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
//	WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
//	CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
//

#import <UIKit/UIKit.h>

#import "InstinctsOfTheHerdThumbView.h"

@class InstinctsOfTheHerdMainPagebar;
@class InstinctsOfTheHerdTrackControl;
@class InstinctsOfTheHerdPagebarThumb;
@class InstinctsOfTheHerdDocument;

@protocol InstinctsOfTheHerdMainPagebarDelegate <NSObject>

@required // Delegate protocols

- (void)pagebar:(InstinctsOfTheHerdMainPagebar *)pagebar gotoPage:(NSInteger)page;

@end

@interface InstinctsOfTheHerdMainPagebar : UIView

@property (nonatomic, weak, readwrite) id <InstinctsOfTheHerdMainPagebarDelegate> delegate;

- (id)initWithFrame:(CGRect)frame document:(InstinctsOfTheHerdDocument *)object;

- (void)updatePagebar;

- (void)hidePagebar;
- (void)showPagebar;

@end

#pragma mark -

//
//	InstinctsOfTheHerdTrackControl class interface
//

@interface InstinctsOfTheHerdTrackControl : UIControl

@property (nonatomic, assign, readonly) CGFloat value;

@end

#pragma mark -

//
//	InstinctsOfTheHerdPagebarThumb class interface
//

@interface InstinctsOfTheHerdPagebarThumb : InstinctsOfTheHerdThumbView

- (id)initWithFrame:(CGRect)frame small:(BOOL)small;

@end

#pragma mark -

//
//	InstinctsOfTheHerdPagebarShadow class interface
//

@interface InstinctsOfTheHerdPagebarShadow : UIView

@end
