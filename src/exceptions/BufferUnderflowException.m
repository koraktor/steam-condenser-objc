/** 
 * This code is free software; you can redistribute it and/or modify it under
 * the terms of the new BSD License.
 *
 * Copyright (c) 2009, Sebastian Staudt
 */

#import "BufferUnderflowException.h"


@implementation BufferUnderflowException

-(id) init {
    self = [super initWithMessage:@"Buffer underflow."];
    return self;
}

@end