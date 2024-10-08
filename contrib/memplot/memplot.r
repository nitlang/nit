# This file is part of NIT ( https://nitlanguage.org ).
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

# R program to draw a nice plot diagram

mem <- read.csv("memory.csv")

library(ggplot2)

order <- rev(unique(mem$class))

ggplot(mem, aes(x=time, y=siztot, fill=class)) +
	geom_area(color='black', size=0.02) +
	scale_fill_brewer(palette="Spectral", breaks=order) +
	theme(legend.text=element_text(size=7))

ggsave("memory.pdf")
ggsave("memory.png")
