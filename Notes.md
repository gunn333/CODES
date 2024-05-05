# Visulizing Libraries in Python

- Matplotlib
- Seaborn

## Line Plots

used to visualize trends over time or relationships between variables.

```ipynb
x = [values]
y = [values]

plt.plot(x, y)
```

## Bar Plot

A bar plot or bar chart is a graph that represents the category of data with rectangular bars with lengths and heights that is proportional to the values which they represent. The bar plots can be plotted horizontally or vertically. A bar chart describes the comparisons between the discrete categories.

```ipynb
plt.bar(x, y , color)
```

## Scatter Plot

```ipynb
plt.scatter(x_axis_data, y_axis_data, s=None, c=None, marker=None, cmap=None, vmin=None, vmax=None, alpha=None, linewidths=None, edgecolors=None)
```

- x_axis_data: An array containing data for the x-axis.matplotlib
- s: Marker size, which can be a scalar or an array of size equal to the size of x or y.
- c: Color of the sequence of colors for markers.
marker: Marker style.
- cmap: Colormap name.
- linewidths: Width of the marker border.
- edgecolor: Marker border color.
- alpha: Blending value, ranging between 0 (transparent) and 1 (opaque).

## Histogram

useful for exploring continuous data, such as numerical measurements or sensor readings.

